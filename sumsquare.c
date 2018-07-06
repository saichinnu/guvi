#include<stdio.h>
void main()
{
   long int n,a,s=0;
   scanf("%ld",&n);
   if(n>=1&&n<=10000)
   {
   while(n!=0)
   {
      a=n%10;
      s=s+(a*a);
      n=n/10;  
   }
   printf("%ld",s);
   }
   else
   printf("Invalid Input");
}
