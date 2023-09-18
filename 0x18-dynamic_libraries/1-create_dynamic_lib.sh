#!/bin/bash
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
sudo cp liball.so /usr/lib

