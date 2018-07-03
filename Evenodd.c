#include <stdio.h>
void main()
{
        long int number;
        scanf("%ld", &number);
        if(number>0)
        {
         if(number%2==1)
         printf("Odd");
         else
         printf("Even");
        }
        else
         printf("Invalid");
}