#include<stdio.h>
	int myAtoI(char *str)                           // function of atoi
	{						
	int res=0;					//initilization result variable
	int sign=1;					
	int i=0;
		if (str[i]=='-')
		{
		sign=-1;
		i++;
		}
	for(;str[i]!='\0';++i)
	{
	res=res*10+str[i]-'0';
	}
	return sign*res;
	}