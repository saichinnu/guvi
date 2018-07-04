#include<stdio.h>
void main()
{
   int n,a,c=0;
   scanf("%d",&n);
   while(n!=0)
   {
     a=n%10;
     c=(c*10)+a;
     n=n/10;
   }
   printf("%d",c);
}