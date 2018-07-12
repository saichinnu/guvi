#include<stdio.h>
int main()
{
   int n,k,i,j,c=0,a[50],b[50];
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
      b[i]=a[i];
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
         if(i!=j)
         {
            if(a[i]+b[j]==k)
            {
              c++;
            }
         } 
     }
   }
   if(c>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
