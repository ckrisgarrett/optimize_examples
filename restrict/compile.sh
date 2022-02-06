#!/bin/bash
CFLAGS="-O3 -march=native"
rm -f *.exe *.o
gcc $CFLAGS -S -fopt-info-vec-all sum.c
gcc $CFLAGS -S -fopt-info-vec-all rsum.c
gcc $CFLAGS -c sum.c
gcc $CFLAGS -c rsum.c
gcc $CFLAGS -c main.c
gcc main.o sum.o -o sum.exe
gcc -DRESTRICT $CFLAGS -c main.c
gcc main.o rsum.o -o rsum.exe
