#include <stdio.h>
int main()
{
   char s[1000], r[1000];
   int i,j,c=0;
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
   printf("%s",r);
   return 0;
}
