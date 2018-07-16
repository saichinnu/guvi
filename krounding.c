#include<stdio.h>
int main()
{
    long int n,k,x,i;
    scanf("%ld%ld",&n,&k);
        x=1;
        while(k--) 
        x*=10;
        for(i=1;i<=x;i++)
        {
            if((n*i)%x==0)
            {
                printf("%ld",n*i);
                break;
            }
        }
    return 0;
}
