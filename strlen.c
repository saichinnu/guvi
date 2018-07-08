#include<stdio.h>
int main()
{
  char s[1000];
  int i=0,c=0;
  scanf("%s",s);
  while(s[i]!='\0')
  {
     c++;
     i++; 
  }
  printf("%d",c);
  return 0;
}
