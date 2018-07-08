#include<stdio.h>
#include<string.h>
int main()
{
   char s[30];
   int i=0,j=0,k=0,c,d;
   scanf("%s",s);
   c=strlen(s);
   for(k=0;k<c;k++)
   {
   if(s[k]=='('||s[k]==')')
   {
      if(s[k]=='(')
      i++;
      else
      j++;
   }
   }
   if(i==j)
   printf("yes");
   else
   printf("no");
   return 0;
}
