#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int n,i,sum=0;
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
     sum=sum+s[i];
   }
   printf("%d",sum);
   return 0;
}
