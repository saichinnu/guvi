#include<stdio.h>
#include<string.h>
int main()
{
   char a[1000],b[3];
   int i,s;
   scanf("%s",a);
   scanf("%s",b);
   i=strlen(a);
   for(s=0;s<i;s++)
   { 
      if(a[s]==b[0])
      {
        printf("%d",s+1);
        break;
      }
   }  
  return 0;
}
