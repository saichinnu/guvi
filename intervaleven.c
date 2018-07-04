#include<stdio.h>
void main()
{
    long int a,b;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
       if(a%2==0)
       { 
          printf("%d ",a);
       }
    }
}