#include <stdio.h>
int main() 
{
       int n,a[100],i,j,s=0;
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
    printf("%d",a[1]);
   return 0;
}
