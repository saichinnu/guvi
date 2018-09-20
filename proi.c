#include<stdio.h>
int main()
{
  int i,n,a[60],c=1,b;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    c*=a[i];  
  }
  for(i=0;i<n;i++)
  {
     b=c/a[i];
     if(i==0)
     printf("%d",b);
     else
     printf(" %d",b);  
  }
  return 0;
}
