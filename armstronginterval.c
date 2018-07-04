#include<stdio.h>
void main()
{
   int m,n,a,b,c=0,d;
   scanf("%d%d",&a,&b);
   for(m=a;m<=b;m++)
   {
   n=a;
   while(n!=0)
   {
     d=n%10;
     c=c+(d*d*d);
     n=n/10;
   }
   if(c==a)
   printf("%d ",c);
   c=0;
   a++;
   }
}