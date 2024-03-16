#!/usr/bin/env sh

# compile source files
g++ -c -Iinclude ../source/*.cpp

# generate static library
ar rcs liblowdb.a *.o

# clean up
rm -f *.o