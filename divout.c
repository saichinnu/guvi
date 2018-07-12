#include<stdio.h>
int main()
{
   int a,b,c=0;
   scanf("%d%d",&a,&b);
   do
   {
     if(a>=b)
     {
     a=a-b;
     c++;
     }
   }
   while(a>=b);
   printf("%d",c);
   return 0;
}
