#include<stdio.h>
int main()
{
   int n,i,a[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {  
         if(i%2==0)
         {
             if(a[i]%2==1)
             printf("%d ",a[i]);
         }
         if(i%2==1)
         {
             if(a[i]%2==0)
             printf("%d ",a[i]);
         }
      }
   return 0;
}
