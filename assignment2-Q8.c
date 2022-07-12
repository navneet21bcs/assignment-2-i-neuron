/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n;
  printf ("Enter a number: ");
  scanf ("%d", &n);
  if (n & 1 == 0)
    printf ("Even");
  else
    printf ("odd");


  return 0;
}
