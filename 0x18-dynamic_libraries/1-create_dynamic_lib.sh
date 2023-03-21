#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c
gcc -c -o *.o liball.so
export LD_LIBRARY_PATH=:/root/alx-low_level_programming/0x18-dynamic_libraries

