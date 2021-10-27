#!/bin/bash
FILE=$1
PACKAGE=$2

# check number of arguments
if [ "$#" -ne 2 ]; then
    echo "Invalid amount of arguments"
    exit 1
fi

# check validity of package name
if [[ "$PACKAGE" =~ [0-9A-Z^] ]]; then
    echo "$PACKAGE is not a conventional Java package name"
    exit 2 
fi 

# check if package is declared 
# i assume the package is declared first, if this is incorrect, another method would be to loop through all lines 
# and cut each line to search to package first, if found, then set $line to the second word in that line and perform the if statement
line=$(head -1 "$FILE" | cut -d' ' -f 2)
#echo $line
if [[ "$line" =~ "$PACKAGE" ]]; then 
    echo "$FILE is in package $PACKAGE"
    exit 0 
else 
    echo "package $PACKAGE not found in $FILE"
    exit 3
fi