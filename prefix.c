#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char s[10][200];
   int i,n,c=0,j,m=0,len;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%s",s[i]);
   len=strlen(s[0]);
   for(i=0;i<len;i++)
   { 
      for(j=1;j<n;j++)
      {
         if(s[0][i]!=s[j][i])
         {
         c=1;
         break;
         }
      }
   if(c!=1)
   {
      m=m+1;
   }
   }  
   
   for(i=0;i<m;i++)
   {
     printf("%c",s[0][i]);
   }
   return 0;
}
