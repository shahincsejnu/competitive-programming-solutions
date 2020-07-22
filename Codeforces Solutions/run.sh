#! /bin/bash

union()
{
  local f
  for f in dir{1,3}/*; do
    basename "$f"
  done |
  sort -u
}

for f in $(union); do
  a="1/$f"
  b="3/$f"
  if [ -e "$a" ]; then
    if [ -e "$b" ]; then
      # file exists in dirA and dirB
      if [ "$a" -nt "$b" ]; then
        mv "$a" Final/.
      else
        mv "$b" Final/.
      fi
    else
      # file exists in dirA but not in dirB
      mv "$a" Final/.
    fi
  else
    # file exists in dirB but not in dirA
    mv "$b" Final/.
  fi
done
