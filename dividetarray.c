#include<stdio.h>
void main()
{
   long int n,i,a[90];
   scanf("%d",&n);
   if(n>=2&&n<=100000)
   {
      for(i=0;i<n;i++)
      {
         scanf("%d",&a[i]);  
      }    
      if(n%2==1)
      printf("yes");
      else
      printf("no");
   }
   else
   printf("Invalid Input");
}
