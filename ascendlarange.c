#include<stdio.h>
int main()
{
    int s,b[30],i;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    scanf("%d",&b[i]);
    i=0;
    while(b[i]<=b[i+1]&&i<s-1)
    {
       i++;   
    }
    printf("%d",b[i]);
    return 0;
}
