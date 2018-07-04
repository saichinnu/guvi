#include<stdio.h>
void main()
{
   int n,a[100],i,c=0,e=-1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      if(i==a[i])
      {
      printf("%d ",a[i]);
      c++;
      } 
   }
   if(c==0)
   printf("%d",e);
}