#include<stdio.h>
int main()
{
   int c=0,i,a,b,s=0,n;
   scanf("%d",&n);
   for(a=2;a<=n;a++)
   {
   for(i=1;i<=n;i++)
   {
       if(a%i==0)
       {
         c++;
       }
   }
     if(c==2)
     {
        if(a%10==3)
        {
           s=s+a;       
        }
     }
     c=0;
   }
   printf("%d",s);
   return 0;
}
