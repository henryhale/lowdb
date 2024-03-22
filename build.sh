#!/usr/bin/env sh

# create output folder
rm -rf build && mkdir build && cd build

# compile source files
g++ -c ../source/*.cpp

# generate static library
ar rcs lowdb.a *.o

# clean up
rm -rf *.o