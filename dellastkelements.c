#include<stdio.h>
int main()
{
    int N,K,a[40],i;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=0;i<N;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<N-K;i++)
    {
      if(i==0)
      printf("%d",a[i]);
      else
      printf(" %d",a[i]);
    }
    return 0;
}
