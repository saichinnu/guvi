#include<stdio.h>
int main()
{
   int a[100],i,c,d=0,e=0;
   long int n;
   scanf("%ld",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      d=0;
      e=0;
      c=a[i];
      while(e<n)
      {
         if(c==a[e])
         {
           d++;
         }     
           e++;     
      }

      if(d==1)
      { 
         printf("%d ",c); 
      }        
   }
  return 0;
}
