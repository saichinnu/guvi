#include<stdio.h>
int main()
{
  int N,i=1,e; 
  scanf("%d",&N);
  for(e=1;e<=N;e++)
  {
    i=i*e;
  } 
  printf("%d",i);
  return 0;
}
