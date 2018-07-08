#include<stdio.h>
int main()
{
   long int n,i,a[100],j,b[100],c=0,t;
   scanf("%ld",&n);
   for(i=0;i<n;i++)
   scanf("%ld",&a[i]);
   for(i=0;i<n;i++)
   {
      b[i]=a[i]; 
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      { 
         if(a[i]>a[j])
         {
             t=a[i];
             a[i]=a[j];
             a[j]=t;  
         }
      } 
   }
    for(i=0;i<n;i++)
    {
       if(a[i]==b[i])
       {
          c++;          
       } 
    }
    if(c==n)
    printf("yes");
    else
    printf("no");
   return 0;
}
