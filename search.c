#include<stdio.h>
int main()
{
   int n,k,a[100],i,c=0;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++) 
   scanf("%d",&a[i]);
   i=0;
   while(i<n)
   {
      if(k==a[i])
      c++;
      i++;
   }
   if(c>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
