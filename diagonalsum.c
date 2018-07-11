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
   i=0,j=n-1;
   while(i!=n)
   {
     s=s+a[i][j];
     i++;
     j--;
   }
   printf("%d",s);
   return 0;
}
