#include<stdio.h>
int main()
{
   int n,a[40],i,max[20],j,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   max[i]=0;
   for(i=0;i<n;i++)
   {
    max[i]=0;
   for(j=i+1;j<n;j++)
   {
      if(max[i]==0)
      {
         if(a[i]<a[j])
         max[i]=max[i]+1;
         else
         break;
      }
      else if(a[j-1]<a[j])
      {
        max[i]=max[i]+1;
      }
      else
      break;
   }
   max[i]=max[i]+1;
   }
   for(i=0;i<n;i++)
   {
     for(j=i+1;j<n;j++)
     {
        if(max[i]<max[j])
        {
             temp=max[i];
             max[i]=max[j];
             max[j]=temp;          
        }
     }
   }
   printf("%d",max[0]);
   return 0;
}
