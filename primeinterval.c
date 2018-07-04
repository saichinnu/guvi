#include<stdio.h>
void main()
{
   int c=0,i,a,b,m;
   scanf("%d%d",&a,&b);
   for(m=a;m<=b;m++)
   {
   for(i=1;i<=b;i++)
   {
       if(a%i==0)
       {
         c++;
       }
   }
     if(c==2)
     printf("%d ",a);
     a++;
     c=0;
   }
}