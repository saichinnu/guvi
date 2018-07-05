#include<stdio.h>
void main()
{
   int a[100],i,c,d=0,e=0;
   long int n;
   scanf("%ld",&n);
   if(n>=1&&n<=100000)
   {
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
  }
  else
  printf("Invalid Input");  
}s