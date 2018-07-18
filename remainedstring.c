#include<stdio.h>
#include<string.h>
int main()
{
   char s[200];
   int i,n,j,c=0;
   scanf("%s",s);
   n=strlen(s);
   for(i=0;i<n;i++)
   { 
      c=0;
      for(j=0;j<n;j++)
      {
         if(s[i]==s[j])
         {
             c++;      
         }
      }   
      if(c==1)
      printf("%c",s[i]);
   }
   return 0;
}
