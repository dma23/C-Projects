#!/bin/bash

DIRECTORY=$1

if [ "$#" -ne 1 ]; then
    echo "Too many arguements"
    exit 1
fi

FILES=$(echo "$DIRECTORY" | tr "." "\n") 

# gets java file by separating each file by periods and reversing to find name of java/compile file 
FILE=$(echo $FILES | tr ' ' '\n'|tac|tr '\n' ' ' | cut -d" " -f1)
curWD=$(pwd)
a="/"
DIR=$curWD$a$FILE

if [  ! -f $DIR".java" ]; then 
    echo "File does not exist"
    exit 2
fi

