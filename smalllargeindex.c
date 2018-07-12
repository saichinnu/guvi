#include<stdio.h>
int main()
{
   int n,a[40],b[40],i,j,d,c,s;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   scanf("%d",&a[i]);
   b[i]=a[i];
   }
   for(i=1;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
        if(a[i]>a[j])
        {
          s=a[i];
          a[i]=a[j];
          a[j]=s;
        }
      }
   }
   c=a[n];
   d=a[1];
   for(i=1;i<=n;i++)
   { 
          if(d==b[i])
          printf("%d",i);
   }
   for(i=1;i<=n;i++)
   { 
          if(c==b[i])
          printf(" %d",i);
   } 
   return 0;
}
