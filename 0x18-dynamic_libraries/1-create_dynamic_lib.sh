#!/bin/bash
gcc -c *.c -fPIC -Wall -Wextra
gcc -shared *.o -o liball.so
