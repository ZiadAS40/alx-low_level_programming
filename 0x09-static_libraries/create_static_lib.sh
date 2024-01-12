#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -Wunused-variable *.c
ar -rc liball.a *.o
ranlib liball.a

