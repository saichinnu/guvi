#include<stdio.h>
void main()
{
  int n,i=1,c; 
  scanf("%d",&n);
  for(c=1;c<=n;c++)
  {
    i=i*c;
  } 
  printf("%d",i);
}