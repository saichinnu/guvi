#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      if(i+ss(i)==n)
      { 
         printf("1\n");
         printf("%d",i);   
         exit(0);
      }
    }
    printf("0");
    return 0;
}
int ss(int g)
{
     int a,b,sum=0;
     while(g!=0)
     {
        a=g%10;
        sum=sum+a;
        g=g/10;     
     }  
     return (sum);
}
