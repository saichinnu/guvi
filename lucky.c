#include<stdio.h>
int main()
{
   int a[60],i,n,j,c=0,s;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
     s=a[i]*i;
     for(j=0;j<n;j++)
     {
        if(s==a[j])
        {
          c++;
          break;
        }
     }   
   }
   printf("%d",c);
   return 0;
}
