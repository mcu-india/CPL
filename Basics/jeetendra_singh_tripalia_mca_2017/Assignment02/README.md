#libatoi & libitoa & libreverse


Way to compile :--- 

I am using Visual Studio 2017 Community Edition and Developer Command Prompt V15.7.5

Compiler :- cl : C/C++ Optimizing Compiler Version 19.14.26433 for x86

Linker :- link : Incremental Linker Version 14.14.26433.0

1) Compile library.c - cl /LD library.c
2) '/LD' is for generate a DLL file because it is a library.
3) Compile test.c - cl test.c library.lib
4) run Usage : test.exe <Number> <Base(2-32)> 



#library.c
------------------------------------------
This is a C library that include functions

1) int libatoi(char *str);
2) char* libreverse(char *buffer,int len);
3) char* libitoa(int value, char *buffer, int base);

#library.h
------------------------------------------

library.h contain dynamic declaration of library.c file as a header file

#test.c
------------------------------------------
Test.c is a demo program for testing functions inside library.c by including library.h as header file..
