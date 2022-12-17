#!/bin/sh
clear

#echo "=[================================================]="

#echo "=[================================================]="

g++ -I src/include -Werror -Wall -pthread src/main.cpp -o build/app.exe
./build/app.exe src/exbin.bin