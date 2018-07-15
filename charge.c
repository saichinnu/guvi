#include<stdio.h>
int main()
{
    int n,k,c[40],i,b,v=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&c[i]);
    scanf("%d",&b);
    for(i=0;i<n;i++)
    v=v+c[i];
    if(v/2==b)
    {
       printf("%d",(c[k]/2));
    }   
    else
    printf("Bon Appetit");
    return 0;
}
