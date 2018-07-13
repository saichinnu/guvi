#include<stdio.h>
int main()
{ 
   long int n,i,a,b,s=0,d=0;
   scanf("%ld",&n);
   while(n!=0)
   { 
      a=n%10;
      s=s+a;
      n=n/10;
   }
   b=s;
   while(s!=0)
   {
      a=s%10;
      d=(d*10)+a;
      s=s/10;  
   }
   if(d==b)
   printf("YES");
   else
   printf("NO");
   return 0;
}
