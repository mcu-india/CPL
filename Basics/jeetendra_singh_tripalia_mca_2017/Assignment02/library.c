/*
 * library.c 
 *
 * Library that include functions ( libatoi(char *str), libreverse(char *buffer,int len), libitoa(int value, char *buffer, int base))
 *
 * Author : Jeetendra Singh Tripalia 
 *
 * Email : jeetendrasinghtripalia@gmail.com
 *
 * @date: September 13, 2018
 *
 */

 #include "library.h"

int libatoi(char *str)
{
	
    int res = 0;		// Result
    int sign = 1;		// Take sign as positive
    int i = 0;			// Index of first digit
 
    if(str[0] == '-'){
        sign = -1;
        i++;  			//update index of first digit
    }
 
    for(; str[i] != '\0'; i++){
		
        if(str[i] <'0' || str[i] >'9'){	  // If string contain character it will terminate
            return 0; 
		}
        res = res*10 + str[i] - '0';
    }
    return (sign*res);
}
 

char* libreverse(char *buffer,int len) {
	int i=0;
	char ch;
	for(i=0;i<=(len-1)/2;i++) {
		ch=buffer[i];
		buffer[i]=buffer[len-1-i];
		buffer[len-1-i]=ch;
	}	
		return (buffer); 
	
}

char* libitoa(int value, char *buffer, int base)
{
	// check input between 2-32
	if(base < 2 || base > 32){
		return "Invalid Base <2-32>";
	}

	int n;
	// check absolute value
	if(value < 0){
		n = (-1)*value;
	}
	else {
		n = value;
	}
	
    // Conversion or loop till null value	
	int i =0;
	while (n!='\0') 						
	{
	    int r = n%base;

		if (r >= 10) 
			buffer[i++] = 65+(r - 10);
		else
			buffer[i++] = 48+r;

		n = n/base;
	}

	// if number is 0
	if(i == 0){
		buffer[i++] = '0';
	}
    // If base is 10 and value is negative preceded with a minus sign (-)
	// With any other base, value is always considered unsigned
	if(value < 0 && base == 10){
		buffer[i++] = '-';
	}

	buffer[i] = '\0'; // null terminate string

	// reverse the string 
	return libreverse(buffer,i);
}