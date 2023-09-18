#!/bin/bash
gcc -Wall -pedantic -Werro -Wextra -std=gnu98 -fPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH

