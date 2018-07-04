#include<stdio.h>
void main()
{
   int a,b,c=0,n,g;
   scanf("%d",&n);
   if(n<=1000)
   {
   a=n;
   while(n!=0)
   {
     g=n%10;
     c=(c*10)+g;
     n=n/10;
   }
   if(c==a)
   printf("yes");
   else
   printf("no");
   }
   else
   printf("invalid input");
}