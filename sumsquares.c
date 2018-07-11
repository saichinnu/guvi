#include<stdio.h>
int main()
{
    long int n,a,s=0;
    scanf("%ld",&n);
    while(n!=0)
    {
       a=n%10;
       s=s+(a*a);
       n=n/10;
    }
    printf("%ld",s);
    return 0;
}
