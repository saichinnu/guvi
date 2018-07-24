#include<stdio.h>
int main()
{
  int a[40],b[40],i,n,j,c=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  scanf("%d",&b[i]);
  for(i=0;i<n;i++)
  {
    for(j=n-1;j>=0;j--)
    { 
        if(a[i]==b[j])
        {
            c++;
        }
    }
  }
  if(c==n)
  printf("yes");
  else
  printf("no");
  return 0;
}
