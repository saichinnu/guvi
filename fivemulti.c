#include<stdio.h>
int main()
{
   int n,i,a;
   scanf("%d",&n);
   for(i=1;i<=5;i++)
   {
     a=n*i;
     if(i==1)
     printf("%d",a);
     else
     printf(" %d",a);
   }
   return 0;
}
