#include<stdio.h>
int main()
{ 
   long int a,b,c,n,l=0,m;
   scanf("%ld%ld",&a,&b);
   c=a^b;
   n=c;
   while(n>0)
   {
      m=n%2;
      if(m==1)
      l++;
      n=n/2;
   }
  printf("%ld",l);
   return 0;
}
