#include<stdio.h>
int main()
{
   int a[100],i,n,d,temp,s;
   scanf("%d%d",&n,&d);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<d;i++)
   { 
      temp=a[0];
      for(s=0;s<n-1;s++)
      {
        a[s]=a[s+1];
      }   
      a[s]=temp;
   }
   for(i=0;i<n;i++)
   {
      if(i==0)
      printf("%d",a[i]);
      else
      printf(" %d",a[i]);
   }
   return 0;
}
