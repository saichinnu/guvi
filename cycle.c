#include<stdio.h>
int main()
{
   long int n,p;
   scanf("%ld",&n);
   p=3;
   while(n>p)
   {
      n=n-p;
      p=p*2;
   }
   printf("%ld",(p-n+1));
   return 0;
}
