#include<stdio.h>
int main()
{
    int N,K,a[30],i,d=0;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {
      if(K==a[i])
      d++;
    }
    if(d>0)
    printf("Yes");
    else
    printf("No");
    return 0;
}
