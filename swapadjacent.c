#include<stdio.h>
int main()
{
    int n,a[40],i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i=i+2)
    {
       s=a[i];
       a[i]=a[i+1];
       a[i+1]=s; 
    }
    for(i=0;i<n;i++)
    {
      if(i==0)
      printf("%d",a[i]);
      else if(n%2==1&&i==n-1)
      {
         a[i]=a[n];
         printf(" %d",a[i]);
      }
      else
      printf(" %d",a[i]);
    }
     return 0;
}
