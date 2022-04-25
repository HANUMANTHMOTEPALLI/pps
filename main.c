/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
  int amount_given,r,q,bill_amount;
   scanf("%d%d",&amount_given,&bill_amount);
    q=amount_given/bill_amount;
    r=amount_given%bill_amount;
   
    printf("%d is the Qotient",q);
     printf("\n%d is the Remainder",r);
    

    return 0;
}
