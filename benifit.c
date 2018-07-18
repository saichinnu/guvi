#include<stdio.h>
int main()
{
   int n,a[40],i,j,temp,be;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   { 
       for(j=i+1;j<n;j++)
       {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }      
       }
   }
   be=a[n-1]-a[0];
   printf("%d",be);
   return 0;
}
