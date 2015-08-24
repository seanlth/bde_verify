#include <sysutil_ident.h>
SYSUTIL_IDENT_RCSID(prqs_rc_api_c,"$Id: prqs_rc_api.c 215343 2011-04-14 13:01:35Z wxin $ $CSID: 4DA6E9900C25861251 $")



/******************************************************************************
  File implements api for creating PRQS RC/RA tickets, for now through BREG/PRQS 
  function.
******************************************************************************/

#include <stdio.h>
#include <dbutil.h>
#include <prqs_rc_api.h>
#include <prqs.h>
#include <prqsdb.h>
#include <prsyncdb.h>
#include <prqs_approver_api.h>
#include <ntct_mail.h>
#include <prqsutil.h>
#include <empldb_wrappers.h>
#include <grabber_util.h>
#include <glib.h>
#include <breg_prqs_api.h>
#include <bregdb_api.h>
#include <prqs_new_out_tree_wrapper.h>
#include <grabber_util.h>
#include <prqs_covg_api.h>
#include <z_bael_log.h>
#include <breg_prqs.h>
#include <bbit/200612/prqs_control_self_approval.h>
#include <bbit/201207/bbit_breguisv_notify_grabber.h>
#include <paulbitchk.h>
#include <getpindex.h>
#include <nextseed.h>
#include <getuuidname_w.h>
#include <prqs_machines_api.h>
#include <systemdate.h>

/* prototype for external func*/
extern  void msecofday_(int *msec);

#define PRQS_FUNC_PINDEX 1839
#define BREG_FUNC_PINDEX 1178
#define PRQS_REGISTRY_TASK_NAME_LEN 9
#define PRQS_REGISTRY_FUNC_NAME_LEN 5
#define PRQS_REGISTRY_NAME_LEN 30
#define PRQS_REGISTRY_EMSG_LEN 81

extern void gettsk_(int *name);

static prqs_registry_rcode prqs_add_rc_record(prqs_registry_record *prqs_record,
					      int creation_time,
					      int creation_date);
static prqs_registry_rcode prqs_add_dv_record(prqs_registry_record *prqs_record,
					      char *api_name,
					      int creation_time,
					      int creation_date);
static prqs_registry_rcode prqs_add_dv_restore_record(prqs_registry_record *prqs_record,
					      char *api_name,
					      int creation_time,
					      int creation_date);
static prqs_registry_rcode prqs_add_ra_record(prqs_registry_record *prqs_record,
					      int creation_time,
					      int creation_date);
static prqs_registry_rcode prqs_registry_verify_pindex(int api_func_pindex,
						       char api_func[PRQS_REGISTRY_FUNC_NAME_LEN]);
static prqs_registry_rcode prqs_validate_prqs_rc_record(prqs_registry_record *prqs_record);
static prqs_registry_rcode prqs_registry_add_info_record(prqs_registry_record *prqs_record,
						int *status,
						int *creation_time,
						int *creation_date);
static void update_fs_queue(int prqs_number,int prog_uuid);
static prqs_registry_rcode prqs_registry_create_log(int prqs_number,
					   int prqs_time,
					   int prqs_date,
					   int prog_uuid,
					   int log_lines,
					   char log_msg[PRQS_REGISTRY_NUM_LOG_LINES]
					   [PRQS_REGISTRY_LOG_LINE_LEN]);
static prqs_registry_rcode prqs_registry_valid_approver(int prqs_type,
							int prog_uuid,
							int approver_uuid,
                                                        int  check_lockdown,
							int priority);
static void prqs_registry_send_msg(prqs_registry_record *prqs_record, 
				   char *funcname,
				   int status);
static gboolean  has_prqs_rc_limit_privilege(
                                      int                  entry_id,
                                      int                  prvuuid,
                                      bregdb_entry_value_t *new_value,
                                      GList                *new_ext_list,
                                      GList                *new_ovr_list,
                                      GList               **new_ext_ovr_list);
static gboolean  check_prqs_rc_speedup(
                                      int                  entry_id,
                                      bregdb_entry_value_t *new_val,
                                      GList                *new_ext_lst,
                                      GList                *new_ovr_lst,
                                      GList               **new_ext_ovr_lst);

/*****************************************
 *                                       *
 * routine to autogenerate prqs rc/ra    * 
 *                                       *
 *****************************************/

prqs_registry_rcode prqs_registry_ticket_create(prqs_registry_record * registry_ticket)
{
    Z_BAEL_LOG_SET_CATEGORY("PRQS_RC_API");

  prqs_registry_rcode rcode;
  char log_msg[PRQS_REGISTRY_NUM_LOG_LINES][PRQS_REGISTRY_LOG_LINE_LEN];
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int  i, check_lockdown;
  int creation_time,creation_date,status=A;  
  int current_host=machine();

  /* sanity check */
  if (!registry_ticket) {
    fprintf(stderr,"<prqs_registry_ticket_create>: Sanity check failed !\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  snprintf(api_func, sizeof(api_func), "BREG");
  
  /* we can only run on prqs machine, or for test dev or test machines */
  if (is_prqs_machine(current_host, 0)==PRQS_API_INVALID_MACHINE && 
      prqs_validate_devmachine(current_host) &&
      prqs_validate_testmachine(current_host)) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Wrong host for prqs function %d\n", machine());
    return PRQS_REGISTRY_INVALID_MACHINE;
  }

  /* first validate inputs */  
  if ((rcode=prqs_validate_prqs_rc_record(registry_ticket))) { 
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on validation\n");
    return rcode;
  }
 
  /* check if the version number is 0. if NOT, set "check_lockdown" to 1,
     else set it to 0 (lockdown checking will not be made when 
     validating approver 
  */
  if (registry_ticket->version_no[0]!='0')
    check_lockdown = 1;
  else
    check_lockdown = 0;
  /* validate approver */
  if ((rcode=prqs_registry_valid_approver(registry_ticket->prqs_type,
					 registry_ticket->prog_uuid,
					 registry_ticket->approver_uuid,
                                         check_lockdown,
					 registry_ticket->priority))) {
      Z_BAEL_LOG_INFO("Failed approval validation: bregid: %d, uuid: %d, "
                      "approver: %d, checklockdown: %d", 
                       registry_ticket->registry_id,
                       registry_ticket->prog_uuid,
                       registry_ticket->approver_uuid,
                       check_lockdown);
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on approval validation\n");
    return rcode;
  }

  if (accprqs_Tstart() != 0)
      return PRQS_REGISTRY_DB_UNDEFINED_ERROR;
  if ((rcode= prqs_registry_add_info_record(registry_ticket,
				  &status,
				  &creation_time,
				  &creation_date))!=PRQS_REGISTRY_NO_ERROR) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on info add \n");
    accprqs_Trollback();
    return rcode;
  }

  /* add rc or ra request depends */
  if (registry_ticket->prqs_type == PRQS_REGISTRY_CHANGE){
    if ((rcode=prqs_add_rc_record(registry_ticket,creation_time,
                                  creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on rc add \n");
      accprqs_Trollback();
      return rcode;
    }
  }
  else if (registry_ticket->prqs_type == PRQS_REGISTRY_ABORT){
    if ((rcode=prqs_add_ra_record(registry_ticket,creation_time,
                                 creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on ra add \n");
      accprqs_Trollback();
      return rcode;
    }
  }

  /* add log_msg passed from the breg/prqs functions */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time,
		  creation_date,
		  registry_ticket->prog_uuid,
		  registry_ticket->num_log_lines,
		  registry_ticket->log_msg);

  /* set local log msg to blanks*/
  for(i = 0;i < PRQS_REGISTRY_NUM_LOG_LINES;i++)
    memset(log_msg[i],0,PRQS_REGISTRY_LOG_LINE_LEN);
  
  /* init the log_msg with an auto  msg */
  snprintf(log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,
	   " ~~~~ This request was automatically generated by %s function",
	   api_func);

  /* add log with a time increamented by 1 to avoid dup on add error */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time+1,
		  creation_date,
		  registry_ticket->prog_uuid,
		  2,
		  log_msg);
  rcode = accprqs_Tcommit();
  if (rcode) {
     fprintf(stderr,"<prqs_registry_ticket_create>:Failed on accprqs_Tcommit()\n");
     return rcode;
  }

  /* update prqs fs queue */
  update_fs_queue(registry_ticket->prqs_number,registry_ticket->prog_uuid);

  /* notify grabber about new request */
  change_prqs_status_contents(registry_ticket->prqs_number,status);

  /* finally send a msges */
  prqs_registry_send_msg(registry_ticket,api_func,status);
  
  return PRQS_REGISTRY_NO_ERROR; 
}


/*****************************************
 *                                       *
 * routine to autogenerate prqs rc for   *
 * Breg releasing code                   *
 *                                       *
 *****************************************/
prqs_registry_rcode prqs_registry_release_ticket_create(
                                         prqs_registry_record * registry_ticket)
{
    Z_BAEL_LOG_SET_CATEGORY("PRQS_RC_API");

  prqs_registry_rcode rcode;
  char log_msg[PRQS_REGISTRY_NUM_LOG_LINES][PRQS_REGISTRY_LOG_LINE_LEN];
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int  i, check_lockdown;
  int creation_time,creation_date,status=A;  
  int current_host=machine();

  /* sanity check */
  if(!registry_ticket) {
    fprintf(stderr,"<prqs_registry_ticket_create>: Sanity check failed !\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  snprintf(api_func, sizeof(api_func), "BREG");
  
  /* we can only run on prqs machine, or for test dev or test machines */
  if(is_prqs_machine(current_host, 0)==PRQS_API_INVALID_MACHINE && 
     prqs_validate_devmachine(current_host) &&
     prqs_validate_testmachine(current_host)) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Wrong host for prqs function %d\n", 
            machine());
    return PRQS_REGISTRY_INVALID_MACHINE;
  }

  /* first validate inputs */  
  if((rcode=prqs_validate_prqs_rc_record(registry_ticket))) { 
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on validation\n");
    return rcode;
  }

  /* releasing breg code, no need to check lockdown */
  check_lockdown = 0;

  /* validate approver */
  if((rcode=prqs_registry_valid_approver(registry_ticket->prqs_type,
					 registry_ticket->prog_uuid,
					 registry_ticket->approver_uuid,
                                         check_lockdown,
					 registry_ticket->priority))) {
      Z_BAEL_LOG_INFO("Failed approval validation: bregid: %d, "
                      "prqs_type: %d, uuid: %d, "
                      "approver: %d, checklockdown: %d, priority %d", 
                      registry_ticket->registry_id,
                      registry_ticket->prqs_type,
                      registry_ticket->prog_uuid,
                      registry_ticket->approver_uuid,
                      check_lockdown,
                      registry_ticket->priority);


    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on approval validation\n");
    return rcode;
  }

  accprqs_Tstart();
  if((rcode= prqs_registry_add_info_record(registry_ticket,
				  &status,
				  &creation_time,
				  &creation_date))!=PRQS_REGISTRY_NO_ERROR) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on info add \n");
    accprqs_Trollback();
    return rcode;
  }

  /* add rc or ra request depends */
  if(registry_ticket->prqs_type == PRQS_REGISTRY_CHANGE){
    if((rcode=prqs_add_rc_record(registry_ticket,creation_time,creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on rc add \n");
      accprqs_Trollback();
      return rcode;
    }
  }
  else if(registry_ticket->prqs_type == PRQS_REGISTRY_ABORT){
    if((rcode=prqs_add_ra_record(registry_ticket,creation_time,creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on ra add \n");
      accprqs_Trollback();
      return rcode;
    }
  }

  /* add log_msg passed from the breg/prqs functions */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time,
		  creation_date,
		  registry_ticket->prog_uuid,
		  registry_ticket->num_log_lines,
		  registry_ticket->log_msg);

  /* set local log msg to blanks*/
  for(i = 0;i < PRQS_REGISTRY_NUM_LOG_LINES;i++)
    memset(log_msg[i],0,PRQS_REGISTRY_LOG_LINE_LEN);
  
  /* init the log_msg with an auto  msg */
  snprintf(log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,
	   " ~~~~ This request was automatically generated by %s function",
	   api_func);

  /* add log with a time increamented by 1 to avoid dup on add error */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time+1,
		  creation_date,
		  registry_ticket->prog_uuid,
		  2,
		  log_msg);
  rcode = accprqs_Tcommit();
  if (rcode) {
     fprintf(stderr,"<prqs_registry_ticket_create>:Failed on accprqs_Tcommit()\n");
     return rcode;
  }

  /* update prqs fs queue */
  update_fs_queue(registry_ticket->prqs_number,registry_ticket->prog_uuid);

  /* call new grabber api to notify the request */
  if (bbit_breguisv_notify_grabber__value() || status != A) {
      Z_BAEL_LOG_INFO("prqs %d notify farmer of status %d", 
                      registry_ticket->prqs_number, status);
      grbr_send_prqs_status_update(registry_ticket->prqs_number, status,
                                   GRBR_STFG_RESET_STATUS_NQ);
  }

  /* finally send a msges */
  prqs_registry_send_msg(registry_ticket,api_func,status);
  
  return PRQS_REGISTRY_NO_ERROR; 
}


/***********************************
 * check if api can be called from *
 * the current func                *
 * also sets the function name     *
 ***********************************/
static prqs_registry_rcode prqs_registry_verify_pindex(int api_func_pindex,
						       char api_func[PRQS_REGISTRY_FUNC_NAME_LEN])
{
 
  /* PRQS */
  if(api_func_pindex == PRQS_FUNC_PINDEX)
    snprintf(api_func,PRQS_REGISTRY_FUNC_NAME_LEN,"PRQS");

  /* BREG */
  else if(api_func_pindex == BREG_FUNC_PINDEX)
    snprintf(api_func,PRQS_REGISTRY_FUNC_NAME_LEN,"BREG");

  else {
    memset(api_func,0,PRQS_REGISTRY_FUNC_NAME_LEN);
    return PRQS_REGISTRY_INVALID_PINDEX;
  }
  return PRQS_REGISTRY_NO_ERROR;
}

/************************************
 * checks if data in prqs_record is *
 * valid                            *
 ************************************/
static prqs_registry_rcode prqs_validate_prqs_rc_record(prqs_registry_record *prqs_record)
{
  char tmpname[PRQS_REGISTRY_NAME_LEN],blanks[PRQS_REGISTRY_DESC_LEN];
  int i;

  memset(blanks,' ',PRQS_REGISTRY_DESC_LEN);
  
  /* sanity check */
  if(!prqs_record){
    fprintf(stderr,"<prqs_registry>:Null pointer passed \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  /* validate prqs type */
  if(prqs_record->prqs_type!=PRQS_REGISTRY_CHANGE &&
     prqs_record->prqs_type!=PRQS_REGISTRY_ABORT &&
     prqs_record->prqs_type!=PRQS_REGISTRY_DV_REQUEST){
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Invalid prqs type \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }  
 
  /* validate uuids and trmv/gtmv  numbers */
  if(prqs_record->prog_uuid<=0 || 
     prqs_record->approver_uuid<=0){
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Negative or zero aren't valid inputs\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
 
  /* validate number of log lines passed */
  if(prqs_record->num_log_lines < 0 || 
     prqs_record->num_log_lines > PRQS_REGISTRY_NUM_LOG_LINES){
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Wrong number of log lines\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  
  /* validate uuids */
  if(getuuidname(tmpname,PRQS_REGISTRY_NAME_LEN,prqs_record->prog_uuid) ||
     tmpname[0] == '*' ||
     getuuidname(tmpname,PRQS_REGISTRY_NAME_LEN,prqs_record->approver_uuid) ||
     tmpname[0] == '*'){
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Invalid uuids\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  /* make sure the description is entered */
  if(!strlen(prqs_record->description) || 
     !strncmp(prqs_record->description,blanks,strlen(prqs_record->description))){
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Invalid description\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  /* validate version */
  if(!strlen(prqs_record->version_no) ||
     !strncmp(prqs_record->version_no,blanks,strlen(prqs_record->version_no))) {
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Invalid version\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  /* validate registry id */
  if(prqs_record->registry_id<=0) {
    fprintf(stderr,"<prqs_validate_prqs_rc_record>:Invalid registry id\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  for (i=prqs_record->num_log_lines; i < PRQS_REGISTRY_NUM_LOG_LINES; i++)
      prqs_record->log_msg[i][0] = '\0';
 
  return PRQS_REGISTRY_NO_ERROR;
}


/***********************************
 * adds info record type to prqsdb *
 ***********************************/
static prqs_registry_rcode prqs_registry_add_info_record(prqs_registry_record *prqs_record,
						int *status,
						int *creation_time,
						int *creation_date)
{
  int rcode;
  empldb_rec_t empl_rec;
  int dbnum = 3346, seed[2];
  char emsg[PRQS_REGISTRY_EMSG_LEN];
  int group=0;
  int subgroup;
  short ttype, tsubtype;
  int prqs_ret;

  /* sanity check */
  if(!prqs_record || !status || !creation_time || !creation_date){
    fprintf(stderr,"<prqs_registry_add_info_record>:Warning!!! Null pointer passed\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
    
  /* get unique request number. */
  nextseed_(&dbnum, seed, &rcode);         
  if (rcode != 0){
    fprintf(stderr, "<prqs_registry_add_info_record>:*** Nextseed failed, rcode = %d\n", rcode);
    return (PRQS_REGISTRY_DB_UNDEFINED_ERROR+rcode);
  }
  prqs_record->prqs_number=seed[1];

  /* set group for the user */
  if((rcode=empldb_find_idx15keyl4(prqs_record->prog_uuid,&empl_rec,
				   emsg, PRQS_REGISTRY_EMSG_LEN))) {
    fprintf(stderr,"<prqs_registry>: %s\n",emsg);
    return (PRQS_REGISTRY_DB_UNDEFINED_ERROR+rcode);
  }

  /* zero out future fields */
  PRQS_BUFzero(0, PRQS_BUFSZB); 
  
  /* if switch for use_new_out_tree() is on */
  /* then use new method to get dept id.    */
  if(prqs_to_use_new_out_tree()==1) {
    if(prqs_set_grp_sgrp_ids_by_uuid(prqs_record->prog_uuid,
                                     &group, &subgroup)!=0)
        printf("set_grp_sgrp_ids_by_uuid was  failed for %d\n",
                prqs_record->prog_uuid);
    PRQS_GROUP_settor(group);
    PRQS_SUBGROUP_settor(subgroup);
  }
  else {
    PRQS_GROUP_settor(empl_rec.dept_chain[4]);
    PRQS_SUBGROUP_settor(empl_rec.dept_chain[5]);
  }
  *creation_date=systemdate(); 
  msecofday_((int *)(creation_time));   
  prqs_api_rq_type2type(prqs_record->prqs_type, &ttype, &tsubtype);
  PRQS_TYPE_settor(ttype);
  PRQS_SUBTYPE_settor(tsubtype);
  PRQS_UUID_PROG_settor(prqs_record->prog_uuid);
  PRQS_UUID_MGR_settor(prqs_record->approver_uuid);
  PRQS_UUID_OP_settor(0);
  PRQS_UUID_ASSIGN_settor(0);
  PRQS_PRIORITY_settor(prqs_record->priority);
  if(prqs_record->prog_uuid==prqs_record->approver_uuid) {
     int ct[32];
     int num_entries = 0;
     int disable_self_approval = 0;
     int pos;
     /*check for disable self-approval */
     if (prqs_control_self_approval__rc(ct, &num_entries, 
                                        sizeof(ct)/sizeof(int))) {
         switch(ct[0]) {
          case 0: 
             break;
          case 1:
             disable_self_approval = 1;
             break;
          case 2:
             for(pos = 2; pos<num_entries;pos++)
               if(prqs_record->prqs_type== ct[pos])
               { 	
    	         disable_self_approval = 1;
	         break;
	       }
             break;
          default:
             disable_self_approval = 0;
         }
     }
     /*pvf level 108 will be allowed self-approval no matter what*/	 
     if(prqs_pvf_checkprvl("PRQS",108,prqs_record->approver_uuid,0))
        disable_self_approval = 0;

     if(disable_self_approval)
     {
       *status = A;
     }  
     else
     {
      if((int)prqs_record->prqs_type==(int)PRQS_RC){
	*status = S;
      }
      else
        *status = S;
     }
  }
  else
    *status = A;
  PRQS_STATUS_settor(*status);
  PRQS_BUCKET_TYPE_settor(get_prqs_bucket_type(prqs_record->prqs_type,0,PRQS_STATUS));
  PRQS_BUCKET_STATUS_settor(get_prqs_bucket_status(PRQS_STATUS));
  PRQS_BUCKET_VIEW_settor(get_prqs_bucket_view(PRQS_BUCKET_TYPE,PRQS_BUCKET_STATUS));
  PRQS_DESCRIPTION_settorP(prqs_record->description, PRQS_DESCRIPTION_LEN);
  prqs_ret = accprqs_add(MACC_ADD, PRQS_INFO_RCD, prqs_record->prqs_number, *creation_date, *creation_time);

  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_registry>:Error adding prqs = %d rqnum = %d \n",
	    prqs_ret,prqs_record->prqs_number); 
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }

  if (!paulbitchk(460, 10)) 
  {
      /* if the ticket type is RC/RA, then update the status in relational
         db that Ticket Status is NEW*/

      if(prqs_record->prqs_type == PRQS_REGISTRY_CHANGE) {
          rcode = breg_prqs_create_prqs_status(prqs_record->prqs_number,
                                               prqs_record->prog_uuid,
                                               "N");
          /* We are going through 'Submitted' state */
          if(*status == S) {
              /* Put trace but don't block */
              if(rcode != BREGDB_API_RC_SUCCESS) {
                  fprintf(stderr, "<breg_prqs_create_prqs_status> failed: Please contact"
                          " TOOLS group now. prqs_num:%d", prqs_record->prqs_number);
                  return PRQS_REGISTRY_NO_ERROR;
              }
              rcode = breg_prqs_update_prqs_status(prqs_record->prqs_number,
                                                   prqs_record->prog_uuid,
                                                   "P");
              if(rcode != BREGDB_API_RC_SUCCESS) {
                  fprintf(stderr, "<breg_prqs_create_prqs_status> failed: Please contact"
                          " TOOLS group now. prqs_num:%d", prqs_record->prqs_number);
                  return PRQS_REGISTRY_NO_ERROR;
              }
          }
      }
      else
          rcode = breg_prqs_create_prqs_status(prqs_record->prqs_number,
                                               prqs_record->prog_uuid,
                                               "P");
      /* if the database status fails it does not return BAD 
         We let the changes roll out.*/
      if(rcode != BREGDB_API_RC_SUCCESS)
          fprintf(stderr, "<breg_prqs_create_prqs_status> failed: Please contact"
                  " TOOLS group now. prqs_num:%d", prqs_record->prqs_number);
  }
  
  return PRQS_REGISTRY_NO_ERROR;
}

/***********************
 * adds prqs rc record *
 ***********************/
static prqs_registry_rcode prqs_add_rc_record(prqs_registry_record *prqs_record,
					      int creation_time,
					      int creation_date)
{
  int prqs_ret;

  /* sanity check */
  if(!prqs_record){
    fprintf(stderr,"<prqs_add_rc_record>:Null pointer passed. \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
#if 0
  if(prqs_registry_verify_pindex(api_func_pindex,api_func) == PRQS_REGISTRY_INVALID_PINDEX){
    fprintf(stderr,"<prqs_add_rc_record>:Wrong pindex %d\n",api_func_pindex);
    return PRQS_REGISTRY_INVALID_PINDEX;
  } 
#endif
    
  /* zero out future fields */
  PRQS_BUFzero(0, PRQS_BUFSZB); 
  /* set info for rc rec */
  PRQS_RC_REG_ENTRY_ID_settor(prqs_record->registry_id);
  PRQS_RC_VERSION_NO_settorP(prqs_record->version_no, PRQS_RC_VERSION_NO_LEN);
  if(prqs_record->covg_required)
      PRQS_RC_COVGREQUIRED_settor(1);
  else
      PRQS_RC_COVGREQUIRED_settor(0);
  prqs_ret = accprqs_add(MACC_ADD, PRQS_RC, prqs_record->prqs_number, creation_date, creation_time);
  
  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_add_rc_record>:Error adding prqs rc = %d rqnum = %d \n",
	    prqs_ret,prqs_record->prqs_number); 
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }
  
  /* add record to COVG */
  if(prqs_record->covg_required) {
      prqs_covg_api_rcode rc_covg;
      rc_covg = prqs_register_covg(prqs_record->prqs_number);
      if(rc_covg!=PRQS_COVG_API_NO_ERROR) {
          fprintf(stderr,
              "prqs_rc_api:prqs_register_covg failed:prqsnum=%d rc=%d\n",
              prqs_record->prqs_number, rc_covg);
      }
  }

  return PRQS_REGISTRY_NO_ERROR;
}

/***********************
 * adds prqs ra record *
 ***********************/
static prqs_registry_rcode prqs_add_ra_record(prqs_registry_record *prqs_record,
					      int creation_time,
					      int creation_date)
{
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int api_func_pindex=getpindex_();
  int prqs_ret;

  /* sanity check */
  if(!prqs_record){
    fprintf(stderr,"<prqs_add_ra_record>:Null pointer passed. \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  if(prqs_registry_verify_pindex(api_func_pindex,api_func) == PRQS_REGISTRY_INVALID_PINDEX){
    fprintf(stderr,"<prqs_add_ra_record>:Wrong pindex %d\n",api_func_pindex);
    return PRQS_REGISTRY_INVALID_PINDEX;
  } 
  
  /* zero out future fields */
  PRQS_BUFzero(0, PRQS_BUFSZB); 
  /* set info for rc rec */
  PRQS_RA_REG_ENTRY_ID_settor(prqs_record->registry_id);
  PRQS_RA_VERSION_NO_settorP(prqs_record->version_no, PRQS_RA_VERSION_NO_LEN);
  prqs_ret = accprqs_add(MACC_ADD, PRQS_RA, prqs_record->prqs_number, creation_date, creation_time);
  
  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_add_ra_record>:Error adding prqs ra = %d rqnum = %d \n",
	    prqs_ret,prqs_record->prqs_number); 
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }
  
  return PRQS_REGISTRY_NO_ERROR;
}

/********************
 * updates prsyncdb *
 ********************/
static void update_fs_queue(int prqs_number,int prog_uuid)
{
  cmdbcontrol contrl;
  prsyncdbrecord rec;
  int rcode;

  /* check if already in the queue */
  rec.prsync_uuid=prog_uuid;
  rec.prsync_rqnum=prqs_number;
  rec.prsync_prod=168;
  rcode=cfnd(accprsync,&contrl,&rec,12,0,0);

  /* don't add if record exists */
  if(rcode!=0 && rcode!=1){
    /* update fastsearch queue */
    rec.prsync_uuid=prog_uuid;
    rec.prsync_rqnum=prqs_number;
    rec.prsync_prod = 168;
    rcode=caddrec(accprsync,&contrl,&rec,0);
    
    /* not a critical failure just put a trace */
    if(rcode!=0)
      fprintf(stderr,"<prqs_rc_api.c>:add to prsyncdb rcode=%d\n",rcode);
  }
  return;
}

/**************************************
 * static function to add log to prqs *
 * with a log_msg                     *
 **************************************/
static prqs_registry_rcode prqs_registry_create_log(int prqs_number,
					   int prqs_time,
					   int prqs_date,
					   int prog_uuid,
					   int log_lines,
					   char log_msg[PRQS_REGISTRY_NUM_LOG_LINES]
					   [PRQS_REGISTRY_LOG_LINE_LEN])
{
  int i, log_empty=1;
  char blanks[PRQS_REGISTRY_LOG_LINE_LEN];
  int prqs_ret;

  /* sanity check */
  if(prqs_number<=0 || prqs_time<=0 ||
     prqs_date<=0 || prog_uuid<=0)
    return PRQS_REGISTRY_INVALID_ARGS;
  
  /* make sure if function is allowed to call the api */
  /*
  if(prqs_registry_verify_pindex(api_func_pindex,api_func) == PRQS_REGISTRY_INVALID_PINDEX){
    fprintf(stderr,"<prqs_registry>:Wrong pindex %d\n",api_func_pindex);
    return PRQS_REGISTRY_INVALID_PINDEX;
  } 
  */
  /* don't do anything just return */
  if(log_lines == 0)
    return PRQS_REGISTRY_NO_ERROR;

  memset(blanks,' ',PRQS_REGISTRY_LOG_LINE_LEN);
  for(i=0;i<PRQS_REGISTRY_NUM_LOG_LINES;i++)
    if(strncmp(log_msg[i],blanks,PRQS_REGISTRY_LOG_LINE_LEN) && 
       strncmp(log_msg[i],blanks,strlen(log_msg[i])))
     log_empty=0;
  
  /* don't add a blank log */
  if(log_empty)
    return PRQS_REGISTRY_NO_ERROR;
    
  /* set db record */  
  PRQS_UUID_AUTHOR_settor(prog_uuid);
  
  for (i=0; i < 5; i++)
    PRQS_LOG_NOTES_settorP(i, log_msg[i], PRQS_LOG_NOTES_LEN);
  
  prqs_ret = accprqs_add(MACC_ADD, PRQS_LOG_RCD, prqs_number, prqs_date, prqs_time);

  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_registry>:Error adding prqs log = %d rqnum = %d \n",
	    prqs_ret,prqs_number);  
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }
  return PRQS_REGISTRY_NO_ERROR;
}

/********************************
 * validates approval           *
 * and sets status              *
 * if input check_lockdown is 0 *
 * then lockdown checking will  *
 * not be made when validating  *
 * approver                     *
 ********************************/
static prqs_registry_rcode prqs_registry_valid_approver(int prqs_type,
							int prog_uuid,
							int approver_uuid,
                                                        int  check_lockdown,
							int priority)
{
  char err_msg[PRQS_APPROVER_API_ERR_MSG_LEN+1];
  prqs_approver_api_rc rc=PRQS_APPROVER_API_ERROR;


  if(prqs_type == PRQS_REGISTRY_ABORT)
     rc=is_prqs_ra_approver_and_group_same(prog_uuid,
					   approver_uuid, 
					   err_msg,
					   PRQS_APPROVER_API_ERR_MSG_LEN+1);
  else if(prqs_type == PRQS_REGISTRY_CHANGE)
     rc=is_prqs_rc_approver_and_group_same(prog_uuid,
					   approver_uuid, 
                                           check_lockdown,
					   err_msg,
					   PRQS_APPROVER_API_ERR_MSG_LEN+1);
  else if(prqs_type == PRQS_REGISTRY_DV_REQUEST)
     rc=is_prqs_dv_approver_and_group_same(prog_uuid,
					   approver_uuid, 
					   err_msg,
					   PRQS_APPROVER_API_ERR_MSG_LEN+1);

    if(rc==PRQS_APPROVER_API_IS_APPROVER && priority==0) 
      rc=is_prqs_priority_0_approver(approver_uuid,err_msg,PRQS_APPROVER_API_ERR_MSG_LEN+1);

  if(rc==PRQS_APPROVER_API_IS_APPROVER) 		 
      return PRQS_REGISTRY_NO_ERROR;
  else
    return PRQS_REGISTRY_INVALID_APPROVER;
}


/*******************
 * routine to      *      
 * send prqs  msgs *
 *******************/
static void prqs_registry_send_msg(prqs_registry_record *prqs_record, 
				   char *funcname,
				   int status)
{
  char message[PRQS_UTIL_MSG_LINES][PRQS_UTIL_MSG_LINE_LEN];
  int to_uuid[PRQS_UTIL_MSG_RECIPIENTS];
  char msg_line[PRQS_UTIL_MSG_LINE_LEN+1];
  short rcode;
  short i;

  /* sanity check */
  if(!funcname || !prqs_record)
    return;

  /* zero out the send to buffer */
  for (i = 0;i < PRQS_UTIL_MSG_RECIPIENTS;i++)
    to_uuid[i] = 0;

  /* set the uuid of the person to receive the msg */
  to_uuid[0] = prqs_record->approver_uuid;
  /* don't send duplicate messages */
  if(prqs_record->approver_uuid!=prqs_record->prog_uuid)
    to_uuid[1] = prqs_record->prog_uuid;

  for (i = 0;i < PRQS_UTIL_MSG_LINES; i++)
    memset(message[i],0,PRQS_UTIL_MSG_LINE_LEN);

  /* create the message to be sent */
  if(status==A)
    snprintf(msg_line,PRQS_UTIL_MSG_LINE_LEN+1,"PRQS %d awaiting Approval (generated from %s)",
	     prqs_record->prqs_number,funcname);
  else
    snprintf(msg_line,PRQS_UTIL_MSG_LINE_LEN+1,"PRQS %d was Approved (generated from %s)",
	     prqs_record->prqs_number,funcname);  
  strncpy(message[0], msg_line,MIN(strlen(msg_line),PRQS_UTIL_MSG_LINE_LEN));

  snprintf(message[1], PRQS_UTIL_MSG_LINE_LEN,"Description: %s\n\n",
	   prqs_record->description);

  snprintf(message[2], PRQS_UTIL_MSG_LINE_LEN,
	   "This request was autogenerated by %s function.\n\n",funcname);   
  snprintf(message[3],PRQS_UTIL_MSG_LINE_LEN+1, "Thank you for using PRQS.\n");

  /* send the msg */ 
  rcode=prqs_send_message(prqs_record->prqs_number,
			  prqs_record->prog_uuid, 
			  to_uuid, message);
  if(rcode)
    fprintf(stderr,
	    "<prqsutil>:Error %d  sending a msg for prqs %d\n",
	    rcode,prqs_record->prqs_number);
  return;
}

prqs_registry_rcode prqs_registry_dv_remove_api(prqs_registry_record * registry_ticket,
						char * api_name)
{
    Z_BAEL_LOG_SET_CATEGORY("PRQS_RC_API");
  prqs_registry_rcode rcode;
  char log_msg[PRQS_REGISTRY_NUM_LOG_LINES][PRQS_REGISTRY_LOG_LINE_LEN];
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int  i, check_lockdown;
  int creation_time,creation_date,status=A;  
  int current_host=machine();

  /* sanity check */
  if(!registry_ticket || !api_name) {
    fprintf(stderr,"<prqs_registry_dv_remove_api>: Sanity check failed !\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  
  /* we can only run on prqs machine, or for test dev or test machines */
  if(is_prqs_machine(current_host, 0)==PRQS_API_INVALID_MACHINE && 
     prqs_validate_devmachine(current_host) &&
     prqs_validate_testmachine(current_host)) {
    fprintf(stderr,"<prqs_registry_dv_remove_api>:Wrong host for prqs function %d\n", machine());
    return PRQS_REGISTRY_INVALID_MACHINE;
  }

  /* first validate inputs */  
  if(registry_ticket->prqs_type!=PRQS_REGISTRY_DV_REQUEST ||
     (rcode=prqs_validate_prqs_rc_record(registry_ticket))) { 
    fprintf(stderr,"<prqs_registry_dv_remove_api>:Failed on validation \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  /* check if the version number is 0. if NOT, set "check_lockdown" to 1, else */
  /* set it to 0 (lockdown checking will not be made when validating approver  */
  if(registry_ticket->version_no[0]!='0')
    check_lockdown = 1;
  else
    check_lockdown = 0;
  /* validate approver */
  if((rcode=prqs_registry_valid_approver(registry_ticket->prqs_type,
					 registry_ticket->prog_uuid,
					 registry_ticket->approver_uuid,
                                         check_lockdown,
					 registry_ticket->priority))) {
      Z_BAEL_LOG_INFO("Failed approval validation: bregid: %d, uuid: %d, "
                      "approver: %d, checklockdown: %d", 
                       registry_ticket->registry_id,
                       registry_ticket->prog_uuid,
                       registry_ticket->approver_uuid,
                       check_lockdown);
    fprintf(stderr,"<prqs_registry_dv_remove_api>:Failed on approval validation\n");
    return rcode;
  }

  accprqs_Tstart();
  if((rcode=prqs_registry_add_info_record(registry_ticket,
				  &status,
				  &creation_time,
				  &creation_date))!=PRQS_REGISTRY_NO_ERROR) {
    fprintf(stderr,"<prqs_registry_dv_remove_api>:Failed on info add \n");
    accprqs_Trollback();
    return rcode;
  }

  /* add dv request depends */

  if((rcode=prqs_add_dv_record(registry_ticket,api_name,creation_time,creation_date))){
    fprintf(stderr,"<prqs_registry_dv_remove_api>:Failed on dv add \n");
    accprqs_Trollback();
    return rcode;
  }


  /* add log_msg passed from the breg/prqs functions */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time,
		  creation_date,
		  registry_ticket->prog_uuid,
		  registry_ticket->num_log_lines,
		  registry_ticket->log_msg);

  /* set local log msg to blanks*/
  for(i = 0;i < PRQS_REGISTRY_NUM_LOG_LINES;i++)
    memset(log_msg[i],0,PRQS_REGISTRY_LOG_LINE_LEN);
  
  /* init the log_msg with an auto  msg */
  snprintf(log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,
	   " ~~~~ This request was automatically generated by %s function",
	   api_func);

  /* add log with a time increamented by 1 to avoid dup on add error */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time+1,
		  creation_date,
		  registry_ticket->prog_uuid,
		  2,
		  log_msg);
  rcode = accprqs_Tcommit();
  if (rcode)
     return rcode;

  /* update prqs fs queue */
  update_fs_queue(registry_ticket->prqs_number,registry_ticket->prog_uuid);

  /* finally send a msges */
  prqs_registry_send_msg(registry_ticket,api_func,status);
  
  return PRQS_REGISTRY_NO_ERROR; 
}

prqs_registry_rcode prqs_registry_dv_restore_api(prqs_registry_record * registry_ticket,
						char * api_name)
{
    Z_BAEL_LOG_SET_CATEGORY("PRQS_RC_API");
  prqs_registry_rcode rcode;
  char log_msg[PRQS_REGISTRY_NUM_LOG_LINES][PRQS_REGISTRY_LOG_LINE_LEN];
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int  i, check_lockdown;
  int creation_time,creation_date,status=A;  
  int current_host=machine();

  /* sanity check */
  if(!registry_ticket || !api_name) {
    fprintf(stderr,"<prqs_registry_dv_restore_api>: Sanity check failed !\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }

  snprintf(api_func, sizeof(api_func), "BREG"); 
  
  /* we can only run on prqs machine, or for test dev or test machines */
  if(is_prqs_machine(current_host, 0)==PRQS_API_INVALID_MACHINE && 
     prqs_validate_devmachine(current_host) &&
     prqs_validate_testmachine(current_host)) {
    fprintf(stderr,"<prqs_registry_dv_restore_api>:Wrong host for prqs function %d\n", machine());
    return PRQS_REGISTRY_INVALID_MACHINE;
  }

  /* first validate inputs */  
  if(registry_ticket->prqs_type!=PRQS_REGISTRY_DV_REQUEST ||
     (rcode=prqs_validate_prqs_rc_record(registry_ticket))) { 
    fprintf(stderr,"<prqs_registry_dv_restore_api>:Failed on validation \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  /* check if the version number is 0. if NOT, set "check_lockdown" to 1, else */
  /* set it to 0 (lockdown checking will not be made when validating approver  */
  if(registry_ticket->version_no[0]!='0')
    check_lockdown = 1;
  else
    check_lockdown = 0;
  /* validate approver */
  if((rcode=prqs_registry_valid_approver(registry_ticket->prqs_type,
					 registry_ticket->prog_uuid,
					 registry_ticket->approver_uuid,
                                         check_lockdown,
					 registry_ticket->priority))) {
      Z_BAEL_LOG_INFO("Failed approval validation: bregid: %d, uuid: %d, "
                      "approver: %d, checklockdown: %d", 
                       registry_ticket->registry_id,
                       registry_ticket->prog_uuid,
                       registry_ticket->approver_uuid,
                       check_lockdown);
    fprintf(stderr,"<prqs_registry_dv_restore_api>:Failed on approval validation\n");
    return rcode;
  }

  accprqs_Tstart();
  if((rcode=prqs_registry_add_info_record(registry_ticket,
				  &status,
				  &creation_time,
				  &creation_date))!=PRQS_REGISTRY_NO_ERROR) {
    fprintf(stderr,"<prqs_registry_dv_restore_api>:Failed on info add \n");
    accprqs_Trollback();
    return rcode;
  }

  /* add dv request depends */

  if((rcode=prqs_add_dv_restore_record(registry_ticket,api_name,
				       creation_time,creation_date))){
    fprintf(stderr,"<prqs_registry_dv_restore_api>:Failed on dv add \n");
    accprqs_Trollback();
    return rcode;
  }


  /* add log_msg passed from the breg/prqs functions */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time,
		  creation_date,
		  registry_ticket->prog_uuid,
		  registry_ticket->num_log_lines,
		  registry_ticket->log_msg);

  /* set local log msg to blanks*/
  for(i = 0;i < PRQS_REGISTRY_NUM_LOG_LINES;i++)
    memset(log_msg[i],0,PRQS_REGISTRY_LOG_LINE_LEN);
  
  /* init the log_msg with an auto  msg */
  snprintf(log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,
	   " ~~~~ This request was automatically generated by %s function",
	   api_func);

  /* add log with a time increamented by 1 to avoid dup on add error */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time+1,
		  creation_date,
		  registry_ticket->prog_uuid,
		  2,
		  log_msg);
  rcode = accprqs_Tcommit();
  if (rcode)
     return rcode;

  /* update prqs fs queue */
  update_fs_queue(registry_ticket->prqs_number,registry_ticket->prog_uuid);

  /* finally send a msges */
  prqs_registry_send_msg(registry_ticket,api_func,status);
  
  return PRQS_REGISTRY_NO_ERROR; 
}


/***********************
 * adds prqs dv record *
 ***********************/
static prqs_registry_rcode prqs_add_dv_record(prqs_registry_record *prqs_record,
					      char *api_name,
					      int creation_time,
					      int creation_date)
{
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int api_func_pindex=getpindex_();
  char dv_text[PRQS_DV_TXT_FLDS_LEN];
  int prqs_ret;

  /* sanity check */
  if(!prqs_record){
    fprintf(stderr,"<prqs_add_rc_record>:Null pointer passed. \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  
  if(prqs_registry_verify_pindex(api_func_pindex,api_func) == PRQS_REGISTRY_INVALID_PINDEX){
    fprintf(stderr,"<prqs_add_rc_record>:Wrong pindex %d\n",api_func_pindex);
    return PRQS_REGISTRY_INVALID_PINDEX;
  } 
    
  /* zero out future fields */
  PRQS_BUFzero(0, PRQS_BUFSZB); 
  /* set info for rc rec */
  PRQS_DV_TXT_FLDS_settorP(0, "Please remove obsolete code from /bbsrc/bregacclib and /bbsrc/bbinc/Cinclude.", PRQS_DV_TXT_FLDS_LEN);
  PRQS_DV_TXT_FLDS_settorP(1, "Files to be removed are:", PRQS_DV_TXT_FLDS_LEN);
  snprintf(dv_text, PRQS_DV_TXT_FLDS_LEN, "   %s.c", api_name);
  PRQS_DV_TXT_FLDS_settorP(2, dv_text, PRQS_DV_TXT_FLDS_LEN);
  snprintf(dv_text, PRQS_DV_TXT_FLDS_LEN, "   %s.h", api_name);
  PRQS_DV_TXT_FLDS_settorP(3, dv_text, PRQS_DV_TXT_FLDS_LEN);
  PRQS_DV_TXT_FLDS_settorP(4, "", PRQS_DV_TXT_FLDS_LEN);

  prqs_ret = accprqs_add(MACC_ADD, PRQS_DV, prqs_record->prqs_number, creation_date, creation_time);
  
  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_add_rc_record>:Error adding prqs rc = %d rqnum = %d \n",
	    prqs_ret,prqs_record->prqs_number); 
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }
  
  return PRQS_REGISTRY_NO_ERROR;
}

/*****************************
 * adds prqs dv for restore
 ****************************/
static prqs_registry_rcode prqs_add_dv_restore_record(prqs_registry_record *prqs_record,
					      char *api_name,
					      int creation_time,
					      int creation_date)
{
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int api_func_pindex=getpindex_();
  char dv_text[PRQS_DV_TXT_FLDS_LEN];
  int prqs_ret;

  /* sanity check */
  if(!prqs_record){
    fprintf(stderr,"<prqs_add_rc_record>:Null pointer passed. \n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
  
  if(prqs_registry_verify_pindex(api_func_pindex,api_func) == PRQS_REGISTRY_INVALID_PINDEX){
    fprintf(stderr,"<prqs_add_rc_record>:Wrong pindex %d\n",api_func_pindex);
    return PRQS_REGISTRY_INVALID_PINDEX;
  } 
    
  /* zero out future fields */
  PRQS_BUFzero(0, PRQS_BUFSZB); 
  /* set info for rc rec */
  PRQS_DV_TXT_FLDS_settorP(0, "Please restore code for /bbsrc/bregacclib and /bbsrc/bbinc/Cinclude.", PRQS_DV_TXT_FLDS_LEN);
  PRQS_DV_TXT_FLDS_settorP(1, "Files to be restored are:", PRQS_DV_TXT_FLDS_LEN);
  snprintf(dv_text, PRQS_DV_TXT_FLDS_LEN, "   %s.c", api_name);
  PRQS_DV_TXT_FLDS_settorP(2, dv_text, PRQS_DV_TXT_FLDS_LEN);
  snprintf(dv_text, PRQS_DV_TXT_FLDS_LEN, "   %s.h", api_name);
  PRQS_DV_TXT_FLDS_settorP(3, dv_text, PRQS_DV_TXT_FLDS_LEN);
  PRQS_DV_TXT_FLDS_settorP(4, "", PRQS_DV_TXT_FLDS_LEN);

  prqs_ret = accprqs_add(MACC_ADD, PRQS_DV, prqs_record->prqs_number, creation_date, creation_time);
  
  if(prqs_ret!=0){
    fprintf(stderr,"<prqs_add_rc_record>:Error adding prqs rc = %d rqnum = %d \n",
	    prqs_ret,prqs_record->prqs_number); 
    if (prqs_ret == 102 || prqs_ret == 103 || prqs_ret == 999)
      return PRQS_REGISTRY_DB_UNAVAILABLE;
    else if(prqs_ret == 2)
      return PRQS_REGISTRY_ADD_DUPLICATE;
    else
      return(prqs_ret + PRQS_REGISTRY_DB_UNDEFINED_ERROR);
  }
  
  return PRQS_REGISTRY_NO_ERROR;
}

#if 0
#include <cmain_in_ftn.h>

/*************** 
  main program 
 ***************/
int main (int argc, char **argv) 
{
  prqs_registry_record prqs_registry;
  prqs_registry_rcode rcode;

  f77override(argc, argv);
  pekludgl_();

  memset(&prqs_registry,0,sizeof(prqs_registry));
  prqs_registry.prqs_type=PRQS_REGISTRY_DV_REQUEST;
  snprintf(prqs_registry.description,sizeof(prqs_registry.description),"TEST registry apis");
  prqs_registry.prog_uuid=1104155;
  prqs_registry.approver_uuid=1104155;
  prqs_registry.registry_id=1;
  snprintf(prqs_registry.version_no,sizeof(prqs_registry.version_no),"1.23");
  snprintf(prqs_registry.log_msg[0],PRQS_REGISTRY_LOG_LINE_LEN,"This is  a test log msg 1");
  snprintf(prqs_registry.log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,"This is  a test log msg 2");
  prqs_registry.num_log_lines=2;
  rcode=prqs_registry_dv_remove_api(&prqs_registry,"test_api");

  fprintf(stderr,"rcode = %d\n",rcode);
}
#endif


/*********************************************************
Routine to check if prqs rc has special approve privilege
return TRUE if have privilege, else return FALSE.
*********************************************************/
static gboolean  has_prqs_rc_limit_privilege(
                                      int                  entry_id,
                                      int                  prvuuid,
                                      bregdb_entry_value_t *new_val,
                                      GList                *new_ext_lst,
                                      GList                *new_ovr_lst,
                                      GList               **new_ext_ovr_lst)
{
    int                  k;
    int                  lst_len;
    GList                *tmplst;
    bregdb_entry_value_t *old_val=NULL;
    GList                *old_ext_lst=NULL;
    GList                *old_ovr_lst=NULL;
    GList               **old_ext_ovr_lst=NULL;
    gboolean              breg_prqs_rc=FALSE;
    gboolean              breg_prqs_rc2=FALSE;

    /* get last non-withdrawn version values */
    breg_prqs_rc = breg_prqs_get_special_version_values(
                                         entry_id,
                                         -1,
                                         &old_val,
                                         &old_ext_lst,
                                         &old_ovr_lst,
                                         &old_ext_ovr_lst);

    if(breg_prqs_rc)
      breg_prqs_rc2 = breg_prqs_rc_has_special_approval(
                                         entry_id,
                                         prvuuid,
                                         new_val,
                                         new_ext_lst,
                                         new_ovr_lst,
                                         new_ext_ovr_lst,
                                         old_val,
                                         old_ext_lst,
                                         old_ovr_lst,
                                         old_ext_ovr_lst);
    /* free memory */
    if(breg_prqs_rc) {
      lst_len = 0;
      if(old_val)
        g_free(old_val);
      if(old_ext_lst) {
        g_list_foreach(old_ext_lst, (GFunc)g_free, NULL);
        g_list_free(old_ext_lst);
      }
      if(old_ovr_lst) {
        lst_len = g_list_length(old_ovr_lst);
        g_list_foreach(old_ovr_lst, (GFunc)g_free, NULL);
        g_list_free(old_ovr_lst);
      }
      if(old_ext_ovr_lst) {
        for(k=0; k<lst_len; k++) {
          tmplst = old_ext_ovr_lst[k];
          if(tmplst) {
            g_list_foreach(tmplst, (GFunc)g_free, NULL);
            g_list_free(tmplst);
          }
        }
      }
    }

    if(breg_prqs_rc2)
      return TRUE;

    return FALSE;
}


prqs_registry_rcode prqs_registry_ticket_create_with_limit_priv(
                                        int                  entry_id,
                                        bregdb_entry_value_t *value,
                                        GList                *ext_lst,
                                        GList                *ovr_lst,
                                        GList                **ext_ovr_lst,
                                        prqs_registry_record *registry_ticket,
                                        int                  *all_quad)
{
    Z_BAEL_LOG_SET_CATEGORY("PRQS_RC_API");
  prqs_registry_rcode rcode;
  char log_msg[PRQS_REGISTRY_NUM_LOG_LINES][PRQS_REGISTRY_LOG_LINE_LEN];
  char api_func[PRQS_REGISTRY_FUNC_NAME_LEN];
  int  i, check_lockdown;
  int creation_time,creation_date,status=A;  
  int current_host=machine();
  gboolean speedup_rc=FALSE;

  /* sanity check */
  if(!registry_ticket) {
    fprintf(stderr,"<prqs_registry_ticket_create>: Sanity check failed !\n");
    return PRQS_REGISTRY_INVALID_ARGS;
  }
    
  *all_quad = 0;

  snprintf(api_func, sizeof(api_func), "BREG");
  
  /* we can only run on prqs machine, or for test dev or test machines */
  if(is_prqs_machine(current_host, 0)==PRQS_API_INVALID_MACHINE && 
     prqs_validate_devmachine(current_host) &&
     prqs_validate_testmachine(current_host)) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Wrong host for prqs function %d\n", machine());
    return PRQS_REGISTRY_INVALID_MACHINE;
  }

  /* first validate inputs */  
  if((rcode=prqs_validate_prqs_rc_record(registry_ticket))) { 
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on validation\n");
    return rcode;
  }
  /* check if the version number is 0. if NOT, set "check_lockdown" to 1, else */
  /* set it to 0 (lockdown checking will not be made when validating approver  */
  if(registry_ticket->version_no[0]!='0')
    check_lockdown = 1;
  else
    check_lockdown = 0;
  /* validate approver */
  if((rcode=prqs_registry_valid_approver(registry_ticket->prqs_type,
					 registry_ticket->prog_uuid,
					 registry_ticket->approver_uuid,
                                         check_lockdown,
					 registry_ticket->priority))) {
    /* try special limit privilege */
    if(has_prqs_rc_limit_privilege(
                                   entry_id,
                                   registry_ticket->approver_uuid,
                                   value,
                                   ext_lst,
                                   ovr_lst,
                                   ext_ovr_lst)) {
      fprintf(stderr,"<prqs_registry_ticket_create>: has rc_limit_priv.\n");
    }
    else {
      Z_BAEL_LOG_INFO("Failed approval validation: bregid: %d, uuid: %d, "
                      "approver: %d, checklockdown: %d", 
                       registry_ticket->registry_id,
                       registry_ticket->prog_uuid,
                       registry_ticket->approver_uuid,
                       check_lockdown);
      fprintf(stderr,
              "<prqs_registry_ticket_create>:Failed on approval validation\n");
      return rcode;
    }
  }

  accprqs_Tstart();
  if((rcode= prqs_registry_add_info_record(registry_ticket,
				  &status,
				  &creation_time,
				  &creation_date))!=PRQS_REGISTRY_NO_ERROR) {
    fprintf(stderr,"<prqs_registry_ticket_create>:Failed on info add \n");
    accprqs_Trollback();
    return rcode;
  }

  /* add rc or ra request depends */
  if(registry_ticket->prqs_type == PRQS_REGISTRY_CHANGE){
    if((rcode=prqs_add_rc_record(registry_ticket,creation_time,creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on rc add \n");
      accprqs_Trollback();
      return rcode;
    }
  }
  else if(registry_ticket->prqs_type == PRQS_REGISTRY_ABORT){
    if((rcode=prqs_add_ra_record(registry_ticket,creation_time,creation_date))){
      fprintf(stderr,"<prqs_registry_ticket_create>:Failed on ra add \n");
      accprqs_Trollback();
      return rcode;
    }
  }

  /* add log_msg passed from the breg/prqs functions */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time,
		  creation_date,
		  registry_ticket->prog_uuid,
		  registry_ticket->num_log_lines,
		  registry_ticket->log_msg);

  /* set local log msg to blanks*/
  for(i = 0;i < PRQS_REGISTRY_NUM_LOG_LINES;i++)
    memset(log_msg[i],0,PRQS_REGISTRY_LOG_LINE_LEN);
  
  /* init the log_msg with an auto  msg */
  snprintf(log_msg[1],PRQS_REGISTRY_LOG_LINE_LEN,
	   " ~~~~ This request was automatically generated by %s function",
	   api_func);

  /* add log with a time increamented by 1 to avoid dup on add error */
  prqs_registry_create_log(registry_ticket->prqs_number,
		  creation_time+1,
		  creation_date,
		  registry_ticket->prog_uuid,
		  2,
		  log_msg);
  rcode = accprqs_Tcommit();
  if (rcode) {
     fprintf(stderr,"<prqs_registry_ticket_create>:Failed on accprqs_Tcommit()\n");
     return rcode;
  }

  /* update prqs fs queue */
  update_fs_queue(registry_ticket->prqs_number,registry_ticket->prog_uuid);
  
  speedup_rc = check_prqs_rc_speedup(entry_id, value, ext_lst, ovr_lst,
                                     ext_ovr_lst);

  if(registry_ticket->prqs_type==PRQS_REGISTRY_CHANGE && speedup_rc) {
      *all_quad = 1;
      /* hiho: call new grabber api to notify the request */
      /* change_prqs_status_contents(registry_ticket->prqs_number,status); */
      grbr_send_prqs_status_update(registry_ticket->prqs_number, status,
          GRBR_STFG_RESET_STATUS_NQ);
  }
  else
  /* notify grabber about new request */
  change_prqs_status_contents(registry_ticket->prqs_number,status);

  /* finally send a msges */
  prqs_registry_send_msg(registry_ticket,api_func,status);

  return PRQS_REGISTRY_NO_ERROR; 
}


static gboolean  check_prqs_rc_speedup(
                                      int                  entry_id,
                                      bregdb_entry_value_t *new_val,
                                      GList                *new_ext_lst,
                                      GList                *new_ovr_lst,
                                      GList               **new_ext_ovr_lst)
{
    int                  k;
    int                  lst_len;
    GList                *tmplst;
    bregdb_entry_value_t *old_val=NULL;
    GList                *old_ext_lst=NULL;
    GList                *old_ovr_lst=NULL;
    GList               **old_ext_ovr_lst=NULL;
    gboolean              breg_prqs_rc=FALSE;
    gboolean              breg_prqs_rc2=FALSE;

    /* get last non-withdrawn version values */
    breg_prqs_rc = breg_prqs_get_special_version_values(
                                         entry_id,
                                         -1,
                                         &old_val,
                                         &old_ext_lst,
                                         &old_ovr_lst,
                                         &old_ext_ovr_lst);

    if(breg_prqs_rc)
      breg_prqs_rc2 = breg_prqs_rc_speedup_propagate(
                                         entry_id,
                                         new_val,
                                         new_ext_lst,
                                         new_ovr_lst,
                                         new_ext_ovr_lst,
                                         old_val,
                                         old_ext_lst,
                                         old_ovr_lst,
                                         old_ext_ovr_lst);
    /* free memory */
    if(breg_prqs_rc) {
      lst_len = 0;
      if(old_val)
        g_free(old_val);
      if(old_ext_lst) {
        g_list_foreach(old_ext_lst, (GFunc)g_free, NULL);
        g_list_free(old_ext_lst);
      }
      if(old_ovr_lst) {
        lst_len = g_list_length(old_ovr_lst);
        g_list_foreach(old_ovr_lst, (GFunc)g_free, NULL);
        g_list_free(old_ovr_lst);
      }
      if(old_ext_ovr_lst) {
        for(k=0; k<lst_len; k++) {
          tmplst = old_ext_ovr_lst[k];
          if(tmplst) {
            g_list_foreach(tmplst, (GFunc)g_free, NULL);
            g_list_free(tmplst);
          }
        }
      }
    }

    if(breg_prqs_rc2)
      return TRUE;

    return FALSE;
}
