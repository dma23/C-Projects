#!/bin/bash
FILE=$1

# check number of arguments 
if [ "$#" -ne 1 ]; then
    echo "Invalid amount of arguments"
    exit 1
fi

# reads earch line and checks for the word static 
# if found, ignores the return type and returns the method name (minus the brackets)
while read lines; do 
    STATIC=$(echo $lines | cut -d' ' -f 2)
     if [[ "$STATIC" =~ "static" ]]; then 
        echo $lines | cut -d' ' -f 4 | cut -d'(' -f 1
        exit 0
    fi
done <$FILE