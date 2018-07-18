#include<stdio.h>
int main()
{
   int n,i,a,b,c;
   scanf("%d",&n);
   a=n%3;
   b=n%7;
   c=b%3;
   if(a==0||b==0||c==0)
   printf("yes");
   else
   printf("no");    
   return 0;
}
