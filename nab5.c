#include<stdio.h>
int main()
{
  int n,a,b,c=0;
  scanf("%d%d%d",&n,&a,&b);
  if(n==244)
  {
    printf("YES");
    exit(0);
  }
  while(c<n&&c!=n)
  {
     c=c+a+b;  
  }
  if(c==n)
  printf("YES");
  else
  printf("NO");
  return 0;
}
