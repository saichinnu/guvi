#include<stdio.h>
int main()
{
   long int n,k,s=0,a[100],b;
   scanf("%ld%ld",&n,&k);
   if(k>=0&&k<=9)
   {
     while(n!=0)
     {
        b=n%10;
        if(k==b)
        s++;
        n=n/10;
     }
     printf("%d",s);
   }
   return 0;
}
