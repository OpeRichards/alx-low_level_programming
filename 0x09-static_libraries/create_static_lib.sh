#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -C *.c
ar rc liball.a *.o
ranlib liball.a
