#include<stdio.h>
int main()
{
   int c=0,i,b=0,m,n;
   scanf("%d",&n);
   for(m=2;m<=n;m++)
   {
   for(i=1;i<=m;i++)
   {
       if(m%i==0)
       {
         c++;
       }
   }
     if(b==0)
     { 
     if(c==2)
     {
     printf("%d",m);
     b++;
     }
     }
     else
     {
     if(c==2)
     printf(" %d",m);  
     }
     m++;
     c=0;
   }
   return 0;
}
