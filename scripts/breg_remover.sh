#!/bin/bash

./scripts/bde_verify --noovr --rewrite-dir=./ --config=../replacer.cfg $1
./scripts/bde_verify --noovr --rewrite-dir=./ --config=../test.cfg $1\-rewritten
mv $1\-rewritten\-rewritten $1\-rewritten  
