LIB_NAME=breguisvcmsg
PACKAGE_NAME=s_breguisvc
SVC_NAME=breguisvc
SVC_ID=64730
SCHEMA_NAME=$(SVC_NAME).xsd
SRC_DIR=src
CFG_DIR=config

schema:
	rapi3tool --mode fetch --serviceInfo $(SVC_NAME):$(SVC_ID)-1 --latest | tail +2 > $(CFG_DIR)/$(SCHEMA_NAME)

generate:
	bas_codegen.pl --mode msg --bidirectional --serviceInfo $(SVC_NAME):$(SVC_ID)-1 --destination $(SRC_DIR) $(CFG_DIR)/$(SCHEMA_NAME)

.PHONY: schema
.PHONY: generate
