#include<stdio.h>
int main()
{
   int n,a[40],i,j,s,k;
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
        if(a[i]>a[j])
        {
          s=a[i];
          a[i]=a[j];
          a[j]=s;
        }
      }
   }
   printf("%d",a[n-k]);       
   return 0;
}
