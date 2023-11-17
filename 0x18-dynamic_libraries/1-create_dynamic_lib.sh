#!/bin/bash

# Compile all .c files into a dynamic library named liball.so
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so *.c
