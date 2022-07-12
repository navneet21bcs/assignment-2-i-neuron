/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int number,digit;
  printf ("enter a number :");
  scanf("%d",&number);
  printf("enter digit");
  scanf("%d",&digit);
  printf("%d",number*10+digit);

  return 0;
}
