#!/bin/bash

# Compile all .c files in the current directory into object files (.o)
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create a static library named liball.a from the generated object files
ar -rc liball.a *.o

# Index the library for faster access
ranlib liball.a

# Clean up: Remove the temporary object files
rm -f *.o

# Print a message to indicate the library creation is complete
echo "Static library liball.a created successfully!"
