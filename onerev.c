#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],s[50];
  int i,n,j=0,c=0,v;
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    for(j=0;j<c;j++)
    { 
      if(a[i]==s[j])
      break;  
    } 
    if(j==c)
    {
       s[c++]=a[i];
    }
  }
  s[c]='\0';
  v=strlen(s);
  for(i=v;i>=0;i--)
  {
   printf("%c",s[i]);
  }
  return 0;
}
