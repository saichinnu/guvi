#include <stdio.h>
int main() 
{
        int n,a[10],i,j,s=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;)
        {
        if(a[j]==a[i])
        {
          for(k=j;k<n;k++)
          {
             a[k]=a[k+1]; 
          }
            n--;
        }
        else
        j++;
        }
   }
   for(i=0;i<n;i++)
   {
      if(i==0)
      printf("%d",a[i]);
      else
      printf(" %d",a[i]);
   }
  return 0;
}
