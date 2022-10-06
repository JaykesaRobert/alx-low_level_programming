#!/bin/bash

# compile *.c to *.o

gcc *.c -c -fPIC


# create liball.so

gcc *.o -shared -o liball.so
