#include<stdio.h>
void main()
{
   long int n,a,b,c=0;
   scanf("%ld",&n);
   if(n<=100000)
   {
   b=n;
   while(n!=0)
   {
     a=n%10;
     c=c+(a*a*a);
     n=n/10;
   }
   if(c==b)
   printf("yes");
   else
   printf("no");
   }
   else
   printf("invalid");
}