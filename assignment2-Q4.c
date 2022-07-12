/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,num1,num2,num3,num4;
    scanf("%d",&n);
    num1=n%10;
    num3=n/100;
    num4=n/10;
    num2=num4%10;
    printf("sum of digit is : %d",num1+num2+num3);

    return 0;
}
