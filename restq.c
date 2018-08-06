#include <stdio.h>
int main() 
{
       long int n,a[30],i,j,s=0,ll=0,v=0;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%ld",&a[i]);
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
        i=0;
        while(ll<=a[n-1])
        { 
             if(ll<=a[i])
             { 
                ll=ll+a[i];
                v++;
             }
            i++;
        }
   printf("%ld",v);     
   return 0;
}
