#include<stdio.h>
void main()
{
   int k,n,a[60],i,s=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   { 
     scanf("%d",&a[i]);
   }
   for(i=0;i<k;i++)
   {
     s=s+a[i];
   }
   printf("%d",s);
}