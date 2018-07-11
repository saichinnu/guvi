#include<stdio.h>
int main()
{
   long int n,i=0,a,b,g[40],sum,m,d=0;
   scanf("%ld",&n);
   while(n!=0)
   {
       a=n%10;
       g[i++]=a;
       n=n/10;   
   }
   sum=g[d]+g[i-1];
   printf("%ld",sum);
   return 0;
}
