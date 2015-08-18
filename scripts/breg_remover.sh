#!/bin/bash

replacer="`dirname $0`/replacer.cfg"
remover="`dirname $0`/remover.cfg"

firstLineReplacer=`sed -n 1p $replacer`
firstLineRemover=`sed -n 1p $remover`


if [[ "$firstLineReplacer" = 'set breg_file '* ]]
then
    sed -i "1s|.*|set breg_file $2|" $replacer
fi

if [[ "$firstLineRemover" = 'set breg_file '* ]]
then
    sed -i "1s|.*|set breg_file $2|" $remover
fi

./`dirname $0`/bde_verify --noovr --rewrite-dir=./ --config=$replacer $1
./`dirname $0`/bde_verify --noovr --rewrite-dir=./ --config=$remover $1\-rewritten


if [ ! -f $1\-rewritten\-rewritten ]
then
    mv $1\-rewritten $1\-rewritten.cpp  

else
    mv $1\-rewritten\-rewritten $1\-rewritten.cpp  
fi
