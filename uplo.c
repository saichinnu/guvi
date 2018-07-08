#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000];
   int i,a;
   scanf("%s",s);
   a=strlen(s);
   for(i=0;i<a;i++)
   {
       if(s[i]>='a'&&s[i]<='z')
       s[i]=s[i]-32;
       else
       s[i]=s[i]+32;
   }
   printf("%s",s);
   return 0;
}
