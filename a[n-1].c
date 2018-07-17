#include<stdio.h>
int main()
{
   int n,a[40],i,j,s=1;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      s=1;
      for(j=0;j<n;j++)
      {
         if(j!=i)
         {
            s=s*a[j];
         }
      }   
       if(i==0)
       printf("%d",s);
       else
       printf(" %d",s);  
   }  
   return 0;
}
