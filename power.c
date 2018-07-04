#include<stdio.h>
void main()
{
    int a,b,i,s=1;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
       s=s*a;  
    }
    printf("%d",s);
}