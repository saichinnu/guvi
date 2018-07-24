#include<stdio.h>
int main()
{
   int c=0,i,a,b,m,s=0;
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
     {
       s++;   
     }
     a++;
     c=0;
   }
   printf("%d",s);
  return 0;
}
