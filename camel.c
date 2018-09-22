#include<stdio.h>
int main()
{
  char s[100];
  int i=0,n=0;
  scanf("%[^\n]s",s);
  while(s[i]!='\0')
  {
    i++;
    n++;
  }
  i=0;
    if(i==0)
    {
       if(s[i]>='A'&&s[i]<='Z')
       {
          while(i<n)
          { 
             if(s[i]==' ')
             {
               i++;
               if(!(s[i]>='A'&&s[i]<='Z'))
               {
                 break;  
               }
             }
             i++;
          }
       }
    }
    if(i==n)
    printf("yes");
    else
    printf("no");
    return 0;
}
