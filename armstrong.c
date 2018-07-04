#include<stdio.h>
void main()
{
   int n,a,b,c=0;
   scanf("%d",&n);
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