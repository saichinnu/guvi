#include<stdio.h>
void main()
{
    long int a,b;
    if(b<=100000)
    {
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
       if(a%2==1)
       { 
          printf("%d ",a);
       }
    }
    }
    else
    printf("invalid input");
}