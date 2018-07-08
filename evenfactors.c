#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {
      for(i=2;i<n;i=i+2)
      {
         if(n%i==0)
         printf("%d ",i);
      }
      if(i==n)
      printf("%d",n);
    }
    return 0;
}
