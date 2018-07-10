#include<stdio.h>
int main()
{
  long int a,i=1,c; 
  scanf("%ld",&a);
  for(c=1;c<=a;c++)
  {
    i=i*c;
  } 
  printf("%ld",i);
  return 0;
}
