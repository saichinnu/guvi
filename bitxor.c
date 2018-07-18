#include<stdio.h>
int main()
{
  int n,a[30],i,d=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
     d=d^a[i];    
  }
  printf("%d",d);
  return 0;
}
