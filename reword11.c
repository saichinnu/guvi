#include<stdio.h>
#include<string.h>
int main()
{
   char s[100];
   int i,start,n,end,j,v=0;
   gets(s);
   n=strlen(s);
   end=n-1;
   for(i=n-1;i>=0;i--)
   {
      if(s[i]==' '||i==0)
      {
          if(i==0)
          start=0;
          else
          {
             start=i+1;
          }
          if(v!=0)
          {
          printf(" ");
          }
      for(j=start;j<=end;j++)
      {
        printf("%c",s[j]);
      }
      end=i-1;
      v++;
   }
   }
   return 0;
}
