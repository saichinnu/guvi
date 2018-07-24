#include<stdio.h>
int main()
{
   int c=0,i,a,b=0,m;
   scanf("%d",&a);
   for(m=1;m<=a;m++)
   {
   for(i=1;i<=m;i++)
   {
       if(m%i==0)
       {
         c++;
       }
   }
     if(c==2)
     {
         if(a%m==0)
         { 
           if(b==0)
           {
           printf("%d",m);
           b++;
           }
           else
           printf(" %d",m);
         }
     } 
     c=0;
   }
  return 0;
}
