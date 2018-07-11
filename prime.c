#include<stdio.h>
int main()
{
   int b=0,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(n%i==0)
       {
         b++;
       }
   }
   if(b==2)
   printf("yes");
   else
   printf("no");
   return 0;
}
