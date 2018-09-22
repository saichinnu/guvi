#include<stdio.h>
int main()
{ 
  int n,a[50],i,c;
  scanf("%d",&n);
  for(i=0;i<n;i++) 
  scanf("%d",&a[i]);
  c=a[0];
  for(i=1;i<n;i++) 
  {
     c=c&a[i];
  }
  printf("%d",c);
  return 0;
}
