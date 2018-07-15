#include<stdio.h>
int main()
{
   int n,k,max,min;
   scanf("%d%d",&n,&k);
   if(n>k)
   min=1;
   else
   min=0;
   max=n-k;
   printf("%d %d",min,max);
   return 0;
}
