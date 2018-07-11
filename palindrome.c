#include<stdio.h>
int main()
{
   int a,b,c=0,n,g;
   scanf("%d",&n);
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
   return 0;
}
