#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000];
   int n,i=0;
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<=n;i=i+3)
   {
       printf("%c",s[i]);
   }
   return 0;
}
