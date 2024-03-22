#!/usr/bin/env sh

# create output folder
mkdir build && cd build

# compile source files
g++ -c -Iinclude ../source/*.cpp

# generate static library
ar rcs lowdb.a *.o

# clean up
rm -rf *.o