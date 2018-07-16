#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("1\n");
    for(i=0;i<=n;i++)
    {
      if(i+ss(i)==n)
      { 
         printf("%d",i);    
      }
    }
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
