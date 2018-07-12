#include <stdio.h>
#include<string.h>
int main() 
{
  char s1[100],s2[100];
  int n,i,e;
  scanf("%s",s1);
  scanf("%s",s2);
  n=strlen(s1);
  for(i=0;i<n;i++)
  {
  e=s1[i]+s2[i];
  e=e-96;
  if(e<123)
  {
  char s=e;
  printf("%c",s);
  }
  else
  {
  char s=e-26;
  printf("%c",s);
  }
  }
  return 0;
}
