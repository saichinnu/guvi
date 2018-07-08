#include<stdio.h>
int main()
{
  char s[1000],a[1000];
  int i=0,c=0,d=0;
  scanf("%s%s",s,a);
  while(s[i]!='\0')
  {
     c++;
     i++; 
  }
  i=0;
  while(s[i]!='\0')
  {
     d++;
     i++; 
  }
  i=0;
  while(s[i]==a[i]&&s[i]!='\0'&&a[i]!='\0')
  {
      i++;
  }
  if(i==c&&i==d)
  printf("yes");
  else
  printf("no");
  return 0;
}
