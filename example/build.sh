#!/usr/bin/env bash

clear

g++ -c book.cpp
g++ -c ../source/db.cpp
g++ -c main.cpp

g++ -o app main.o db.o book.o

rm -rf *.o

./app
