#include <stdio.h>
int main() 
{
        int n,a[10],i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	s=a[0];
	for(i=0;i<n-1;i++)
        {
           if(a[i]<a[i+1])
           s=a[i+1];
        }
    printf("%d",s);
    return 0;
}
