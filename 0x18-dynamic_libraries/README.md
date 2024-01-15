# 0x18-dynamic_libraries
## How to create them (Linux only)
1. gcc -fPIC -c *.c : generate the object files (.o) from the source files (.c) and the -fPIC to make the code position independent.

2. gcc -shared -o libname.so *.o : put together those objects files into one library. 

3. nm -D liball.so : To verify the functions as dynamic symbols is right 

## How to use it
gcc -Wall -pedantic -Werror -Wextra -L. *.c -ldynamic -o filename 
