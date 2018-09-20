#include<stdio.h>
int main()
{
  int i,n,a[60],k,j,c=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
       if(a[i]+a[j]==k)
       {
         if(c==0)
         {
            c++;
            printf("YES");
         }
       }
    }
  }
  if(c==0)
  printf("NO");
  return 0;
}
