#include<stdio.h>
int main()
{
   int n,a[50],i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      printf("%d %d",a[i],i);
      if(i!=n-1)
      printf("\n");
   }
   return 0;
}
