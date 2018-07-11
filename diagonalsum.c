#include<stdio.h>
int main()
{
   int n,a[40][40],i,j,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   for(j=0;j<n;j++)
   {
     scanf("%d",&a[i][j]);
   }
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
         if(i==j)
         {
           s=s+a[i][j];
         } 
      }
   } 
   printf("%d",s);
   return 0;
}
