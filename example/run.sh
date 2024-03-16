#!/usr/bin/env sh

# compile source files
g++ -c -Iinclude ../source/*.cpp
g++ -c -Iinclude in-memory-test.cpp

# generate executable - linking object files
g++ *.o -o example

# remove object files
rm -f *.o

# run example
./example
