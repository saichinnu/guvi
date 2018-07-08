#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
       while(n!=k)
    {
        if(n>k)
            n-=k;
        else
            k-=n;
    }
    printf("%d",n);
   return 0;
}
