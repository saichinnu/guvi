#include <stdio.h>
int main()
{
   char s[1000],r[1000];
   int i,j,c=0,d=0;
   scanf("%s",s);
   while (s[c]!='\0')
      c++;
   j=c-1;
   for(i=0;i<c;i++) 
   {
      r[i]=s[j];
      j--;
   }
   r[i]='\0';
   for(i=0;i<c;i++)
   {
       if(s[i]==r[i])
       d++;
   }
   if(d==c)
   printf("YES");
   else
   printf("NO");
   return 0;
}
