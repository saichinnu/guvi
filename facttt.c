#include<stdio.h>
int main()
{
  long int num,i=1,d; 
  scanf("%ld",&num);
  for(d=1;d<=num;d++)
  {
    i=i*d;
  } 
  printf("%ld",i);
  return 0;
}
