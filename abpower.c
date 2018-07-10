#include<stdio.h>
int main()
{
   long int a,b,i,s=1;
   scanf("%ld%ld",&a,&b);
   for(i=0;i<b;i++)
   {
     s=s*a;   
   }
   printf("%ld",s);
   return 0;
}
