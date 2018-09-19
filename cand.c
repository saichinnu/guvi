#include<stdio.h>
int main()
{
 int a[80],i,n,m=1,m1=1;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n-1;i++)
 { 
   if(a[i]>=a[i+1])
   {
      m=1;
      m1=m1+m;  
   }
   else 
   {
     m++;
     m1=m1+m;
   }
   if(i==n-1)
   {
      if(a[n-2]>a[n-1])
      {
         m++;
         m1=m1+m;
      }    
   }
 }
   printf("%d",m1);
 return 0;
}
