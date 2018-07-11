#include<stdio.h>
int main()
{
    long int n,a,s=0,e,f=0,m,v;
    scanf("%ld",&n);
    e=n;
    while(n!=0)
    {
      a=n%10;
      f++;
      n=n/10;
    }
    while(e!=0)
    {
      a=e%10;
      v=1;
      for(m=1;m<=f;m++)
      {
        v=v*a;
      }
      s=s+v;
      e=e/10;
    }
    printf("%ld",s);
    return 0;
}
