#include<stdio.h>
void main()
{
 double n,i=1,c; 
  scanf("%lf",&n); 
  if(n<=20)
  {
  for(c=1;c<=n;c++)
  {
    i=i*c;
  } 
  printf("%.lf",i);
  }
  else
  printf("Invalid Input");
}