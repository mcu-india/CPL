/*library.c ------ defining myatoi and myitoa function in library.h */
#include "library.h"
int myatoi()    /*myatoi function*/
{
	char ascii;
	printf("enter a character=");
	scanf("%c",&ascii);
	printf("%d\n",ascii);
}
int myitoa()    /*myitoa function*/
{
	int integer;
	printf("enter an integer between 0-127:");
	scanf("%d",&integer);
	printf("%c\n",integer);
	return 0;
}