#include<stdio.h>
int main()
{
   int n,a[30],i,j,s,t;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     { 
       if(a[i]>a[j])
       { 
          s=a[i];
          a[i]=a[j];
          a[j]=s;
       }
     }
   }
   i=0;
   j=n-1;
   t=0;
   if(t==0)
   {
      if(i<j)
   {
      printf("%d",a[j--]);
      printf(" ");
      printf("%d",a[i++]);
      t++;
   }
   }
   if(t!=0)
   {
   while(i<j)
   {
      printf(" %d",a[j--]);
      printf(" %d",a[i++]);
   }
   }
   if(n%2!=0)
   printf(" %d",a[i]);
   return 0;
}
