#include<stdio.h>
void main()
{
   int b=0,i,n;
   scanf("%d",&n);
   if(n<=1000)
   {
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
         b++;
       }
   }
   if(b==2)
   printf("yes");
   else
   printf("no");
   }
   else
   printf("invalid input");
}