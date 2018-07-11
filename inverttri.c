#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { 
    for(j=i;j<=n;j++)
    {
      if(j==i)
      {
      printf("1");
      }
      else
      printf(" 1");
      if(i==n)
      exit(0);
    }
    printf("\n");
  }
  return 0;
}
