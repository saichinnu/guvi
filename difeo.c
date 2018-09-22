#include<stdio.h>
int main()
{ 
  int n,a[50],i,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    c++;  
  }
  if(c==1)
  {
     for(i=0;i<n;i++)
     {
         if(a[i]%2==0)
         printf("%d",a[i]);
     }
  }
  else
  {
   for(i=0;i<n;i++)
     {
         if(a[i]%2==1)
         printf("%d",a[i]);
     }
  }
  return 0;
}
