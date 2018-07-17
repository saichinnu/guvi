#include<stdio.h>
int main()
{
   int n,l,r,a[40],i,temp,c,j;
   scanf("%d%d%d",&n,&l,&r);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=l-1;i<r;i++)  
   { 
      for(j=l;j<r;j++)
      {
      	if(a[i]>a[j])
      	{
      		temp=a[j];
      		a[j]=a[i];
      		a[i]=temp;
      	}
      }
   }
   printf("%d",a[l-1]);
   return 0;
}
