#include <stdio.h>
int main() 
{
       int n,a[10],i,j,s=0,an;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
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
    an=a[n-1]-a[0];
    printf("%d",an);
  return 0;
}
