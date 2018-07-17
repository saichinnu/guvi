#include<stdio.h>
int main()
{  
   char s[30];
   int i,n,c=0;
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n;i++)
   {
       if(s[i]=='a'||s[i]=='b')
       c++;
   }
   if(c==n||c==n-1)
   printf("yes");
   else
   printf("no");
   return 0;
}
