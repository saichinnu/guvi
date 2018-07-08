#include<stdio.h>
int main()
{
   int n,i,c=0;
   scanf("%d",&n);
   for(i=1;i<=n;i=i+2)
   {
      if(n%i==0&&c==0)
      {
        printf("%d",i);
        c++;
      }  
      else
      { 
         if(n%i==0)
         printf(" %d",i);
      }
   }
   return 0;
}
