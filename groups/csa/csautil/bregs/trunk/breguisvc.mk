INCLIBS = -lbregapiutils
INCLIBS += -lmisutil
INCLIBS += -lfoninfoutil
INCLIBS += -lprqsutil
INCLIBS += -lcsdbmanip
INCLIBS += -lprofilesvcpub
INCLIBS += -la_basfs
INCLIBS += -lnscrlib
INCLIBS += -lloadparmcmutil
INCLIBS += -lpwhoutil
INCLIBS += -lmsgutil
INCLIBS += -lftracelevels
INCLIBS += -lafmtbitaccessors
INCLIBS += -lafmtinternal
INCLIBS += -lctrltmsgs
INCLIBS += -lfxeurocore
INCLIBS += -ltspcomdb2dbacc
INCLIBS += -ltsfpsdbacc
INCLIBS += -lafmtfmemchk
INCLIBS += -lbregrapidacc
INCLIBS += -lmdb
INCLIBS += -ltsfirmdbacc
INCLIBS += -luseroverrides
INCLIBS += -lbap
INCLIBS += -llabeldbacc
INCLIBS += -lmis
INCLIBS += -lnfpvprivs
INCLIBS += -lpvfdatadbacc
INCLIBS += -lusrovrdbacc
INCLIBS += -lusertrmldbacc
INCLIBS += -ldatelib
INCLIBS += -ltomscorecalcrt
INCLIBS += -lbdaydb2cdrdb
INCLIBS += -lz_a_datelib
INCLIBS += -la_datelib
INCLIBS += -lbbcachecore
INCLIBS += -lmgp
INCLIBS += -lpout2svcmsg
INCLIBS += -ltimezoneutil
INCLIBS += -ltsrectypestrack
INCLIBS += -ltsrtadmin
INCLIBS += -la_cdrdb
INCLIBS += -la_cdrsvc
INCLIBS += -ladmancomm
INCLIBS += -lbbcesvcmsg
INCLIBS += -lbbglib
INCLIBS += -lbbhostutil
INCLIBS += -lclassroute
INCLIBS += -lfeatenblm
INCLIBS += -lhistdefutil
INCLIBS += -lispaccpsc
INCLIBS += -lisyscomdb2dbacc
INCLIBS += -lmiscmdbacc
INCLIBS += -lmpt
INCLIBS += -lpwhosvcmsg
INCLIBS += -lrapidperm
INCLIBS += -ltmgrproto
INCLIBS += -ltradsysdbapi
INCLIBS += -lwrktksvcmsg
INCLIBS += -la_comdb2
INCLIBS += -lbas
INCLIBS += -lprofileservicemsg
INCLIBS += -ltsclassrte
INCLIBS += -la_xmf
INCLIBS += -lroutecfgmgr
INCLIBS += -lz_bae
INCLIBS += -lmisapienums
INCLIBS += -ltradsystypes
INCLIBS += -lbbe
INCLIBS += -lisl
INCLIBS += -lgdebuglog
INCLIBS += -lgnuiconv

RS_LIBS = 

# -*- makefile -*-
# Generated on sundev31 at Wed Apr 22 10:28:30 2015 by yzhang744 using:
# /bbsrc/bin/prod/bin/bde_metamkmk.pl '-t' 'pekludge' 'breguisvc.mk'
# $Id$ $CSID$

TASK=breguisvc.tsk

###
### DO NOT CHANGE THE DEFINITION OF THE 'MSGOBJS' MACRO
###
MSGOBJS=\
s_breguisvc_messages.o \
s_breguisvc_schema.o \
s_breguisvc_schemautil.o

OBJS=\
$(MSGOBJS) \
s_breguisvc_buildopts.o \
s_breguisvc_manifest.o \
s_breguisvc_entry.o \
s_breguisvc_requestcontext.o \
s_breguisvc_requestrouter.o \
s_breguisvc_requestprocessor.o \
s_breguisvc_version.o \
s_breguisvc_versiontag.o \
s_brgdvsvc_messages.o \
breguisvc.m.o \
breguisvc_dum.o \
prqs_rc_api.o \
s_breguisvc_breg_v3.o \
s_breguisvc_helpers_v3.o \
s_breguisvc_breg_v3_entry.o \
s_breguisvc_breg_v3_node.o \
s_breguisvc_breg_v3_value.o \
s_breguisvc_breg_v3_prqs.o \
s_breguisvc_breg_v3_tree.o \
s_breguisvc_search_v3.o \
s_breguisvc_breg_v3_checker.o \
s_breguisvc_value_checker.o \

# Use the SRCDIRS macro to specify subdirectories that should be searched in
# addition to the current directory for source files. If SRCS has been
# specified explicitly then SRCDIRS has no effect.
#SRCDIRS=

# remove this to disable checking for gcc warnings
IS_GCC_WARNINGS_CLEAN=yes
IS_BDE       = yes
IS_PTHREAD   = yes
IS_EXCEPTION = yes
IS_TMGR      = yes

IS_PEKLUDGE=yes

USER_CFLAGS   += -I.
USER_CPPFLAGS += -I.
USER_FFLAGS   += -I.

NOCOMPOBJS= \
  $(NONBIGDUMMY)

# Specify here which libraries from the RS_Suite you need, e.g.: xerces z


# The LIBS macro should always contain $(INCLIBS) which is what llcalc
# controls. You can add additional libraries in LIBS before $(INCLIBS) but not
# after. llcalc will rewrite the INCLIBS macro completely each time it is run
# so avoid making modifications to INCLIBS.

LIBS= $(INCLIBS)

LLCALC_PKG_INCLUDE +=
LLCALC_SET_INCLUDE +=
LLCALC_PKG_EXCLUDE +=
LLCALC_SET_EXCLUDE +=

# do not modify below this point
METAMKMK_VER=1.0
IS_CPPMAIN=1
IS_DEPENDS_NATIVE=1
MKINCL?=/bbsrc/mkincludes/
include $(MKINCL)sourcelist.mk
include $(LIBMACROS_MK)
OBJS?=$(OBJS_AR)
include $(MKINCL)machdep.newlink
include $(MKINCL)linktask.newlink
# vim:ft=make
