#include<stdio.h>
int main()
{
    int N,a[30],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {   
        if(i==0)
        {
        if(a[i]>a[i+1])
        {
        	 printf("%d",a[i]);
        }
        else
        {
        	printf("%d",a[i+1]);
        }
        }
        else
        {
        	if(a[i]>a[i+1])
        {
        	 printf(" %d",a[i]);
        }
            else
        {
        	printf(" %d",a[i+1]);
        }

        }
    }
    return 0;
}
