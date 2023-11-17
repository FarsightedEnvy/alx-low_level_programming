#!/bin/bash

# Compile all .c files into a dynamic library named liball.so
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so *.c

# Generate main.h file with function prototypes
echo -e "#ifndef MAIN_H\n#define MAIN_H\n\n/* Function prototypes */" > main.h
for file in *.c; do
    grep -E "^[a-zA-Z_]+[ \t]+[a-zA-Z_]+[ \t]*\([^)]*\)[ \t]*{?$" "$file" | sed -e 's/^\([a-zA-Z_]\+[ \t]\+[a-zA-Z_]\+[ \t]*\([^)]*\)[ \t]*{\?$\)/\1;/'
done >> main.h
echo -e "\n#endif /* MAIN_H */" >> main.h

# Compile main.h and libdynamic.so
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC main.h
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o libdynamic.so *.o

# Cleanup: remove temporary files
rm -f main.h *.o
