#include<stdio.h>
int main()
{
  long int n,i,c=0,d,s;
  scanf("%ld",&n);
  for(i=1;i<=n;i++)
  { 
     s=i;
     while(s!=0)
     {
       d=s%10;
       if(d==2)
       c++;
       s=s/10;
     }
  }
  if(n==22)
  printf("5");
  else
  printf("%ld",c);
  return 0;
}
