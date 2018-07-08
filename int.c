#include<stdio.h>
int main()
{
   long int a;
   scanf("%ld",&a);
   if(a>=-32768&&a<=32767)
   {
     printf("INT");
   }
   else
   printf("LONG");
   return 0;
}
