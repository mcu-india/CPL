/*
 * Tables.c
 *
 * Sample program to learn to use debugger.
 * This program calls function and prints a
 * multiplication table. The function returns
 * a value that determines if the called function
 * succeeded or not.
 */

#include <stdio.h>
#include <stdlib.h>

// Forward declaration for a function that is either
// implemented later in this file or in some other
// source file for which a header file is not included
int PrintTableFor(int);

// We will receive input from user to print table
int main(int argc, char * argv[])
{
  int retValue = 0;

  // Constants always on left in comparisons!
  if(2 != argc){
    printf("Usage:\n");
    printf("To print table for num, %s <num>\n", argv[0]);

    // Always have a single exit point in the function
    goto exit;
  }

  retValue = atoi(argv[1]);

  // QQ: What is the value of retValue
  //  before and after this function call?
  retValue = PrintTableFor(retValue);

  if(0 != retValue){
    printf("PrintTableFor() returned %d\n", retValue);
  }

exit:
  return 0;
}

int PrintTableFor(int args)
{
  int i = 0;
  int retValue = 0;  // initialized with success

  if(0 >= args){
    retValue = -1;
    goto exit;
  }

  for(i=1; i<=10; i++){
    printf("%d x %2d = %2d\n", args, i, args*i);
  }

exit:
  return retValue;
}
