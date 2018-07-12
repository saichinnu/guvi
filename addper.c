#include<stdio.h>
int main()
{
   long int n,i=0,a,b,g[40],s=0,m,j,k;
   scanf("%ld",&n);
   while(n!=0)
   {
       a=n%10;
       g[i++]=a;
       n=n/10;   
   }
   for(j=0;j<i;j++)
   {
     for(k=j;k<i;k++)
     {  
       s=s+g[k];     
     }
   }
   printf("%ld",s);
  return 0;
}
