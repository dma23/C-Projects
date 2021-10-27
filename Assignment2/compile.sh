#!/bin/bash
FILE=$1

# number of argument check
if [ "$#" -ne 1 ]; then
    echo "Too many arguements"
    exit 1
fi

# check if file exists
if [ ! -f "$FILE" ]; then
    echo "$FILE does not exist" 
    exit 2
fi

# checks if file compiles (by checking error status wehen compiling (javac)) 
javac $FILE
STATUS=$?
if [ $STATUS -eq 0 ]; then 
    echo "$FILE compiled successfully"
    exit 0
else
    echo "$FILE did not compile"
    exit 3
fi