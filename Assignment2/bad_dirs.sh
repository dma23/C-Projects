#!/bin/bash
#
# bad_dirs.sh: List incorrectly named directories

# list directories with spaces
spaces=$(find . -maxdepth 1 -type d -regex '.* .*' -print | sort)
if [[ -n $spaces ]]; then
  echo "Filenames with spaces:"
  echo "$spaces"
fi

# INSTRUCTIONS
# only appear once, in order
# unusual characters (anything other than _-) -> directories missing spaces -> all directories that should be renamed

# files with unusal characters
s=$(find . -maxdepth 1 -type d -regex ".*" -print | grep -e "'." | sort)
if [[ -n $s ]]; then
  echo "Filenames with irregular characters:"
  echo "$s"
fi

# files with incorrectly separated names
s2=$(find . -maxdepth 1 -type d -regex ".*" -print | grep -e "[A-Z][a-z]*[A-Z]" | sort)
if [[ -n $s2 ]]; then
  echo "Filenames that might have incorrectly separated names:"
  echo "$s2"
fi

#s3="$spaces$s"
s3="$spaces"
if [[ -n $s3 ]]; then
  echo "Files that might need to be renamed"
  echo "$s3" | sort -u
fi