#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the dynamic library liball.so from the compiled object files
gcc -shared -o liball.so *.o

# Clean up by removing the compiled object files
rm *.o

echo "Dynamic library liball.so created"

