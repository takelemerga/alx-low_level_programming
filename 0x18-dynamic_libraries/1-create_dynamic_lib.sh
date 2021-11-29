#!/bin/bash
gcc -fPIC -Wall -Wextra -Werror -pedantic -c *.c
gcc -shared *.o -o liball.so
