#include<stdio.h>
int main()
{
   int l,r,i,d=0,j;
   scanf("%d%d",&l,&r);
   for(i=l;i<=r;i++)
   {
      for(j=1;j*j<=i;j++)
      {
       if(j*j==i)
       d++;
      }
   }
   printf("%d",d);
   return 0;
}
