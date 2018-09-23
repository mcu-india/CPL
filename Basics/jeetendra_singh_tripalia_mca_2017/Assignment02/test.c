#include<stdio.h>
#include "library.h"

// Using libatoi() or libitoa() function 
int main(int argc, char *argv[])
{
	
	if(argc !=3){
		printf("Usage : Program.exe <Number> <Base(2-32)>");
	}
	else{
	char buffer[33];

	int value = libatoi(argv[1]);
	int base = libatoi(argv[2]);
		printf("Number : %d & Base : %d = %s\n", value, base, 
			libitoa(value, buffer, base));
	}

	return 0;
}