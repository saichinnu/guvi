#include<stdio.h>
int main()
{
   int a,b,c,d;
   scanf("%d%d%d",&a,&b,&c);
   d=a+b+c;
   if(a>=0&&b!=0&&c<=180&&d==180)
   { 
     printf("yes");
   }
   else
   printf("no");
   return 0;
}
