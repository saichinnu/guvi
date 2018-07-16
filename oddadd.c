#include<stdio.h>
int main()
{
   long int n,i,a,b,sum=0;
   while(n!=0)
   { 
     a=n%10;
     if(a%2==1)
     {
     sum=sum+a;
     }
     n=n/10;
   } 
   if(sum%2==1)
   printf("O");
   else
   printf("E");
   return 0;
}
