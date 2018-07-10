#include<stdio.h>
int main()
{
   int n,m,a[30],b[30],i,j,s;
   scanf("%d%d",&n,&m);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<m;i++)
   scanf("%d",&b[i]);
   for(i=n,j=0;i<n+m&&j<m;i++,j++)
   {
       a[i]=b[j];
   }
   for(i=0;i<(n+m);i++)
   {
     for(j=i+1;j<(n+m);j++)
     {
     if(a[i]>a[j])
     {
       s=a[i];
       a[i]=a[j];
       a[j]=s;  
     }
     }
   }
   for(i=0;i<n+m;i++)
   { 
       if(i==0)
       printf("%d",a[i]);
       else
       printf(" %d",a[i]);
   }
   return 0;
}
