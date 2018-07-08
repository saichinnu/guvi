#include<stdio.h>
int main()
{
  char s1[1000],s2[1000];
  int i=0,a=0,b=0;
  scanf("%s%s",s1,s2);
  while(s1[i]!='\0')
  {
     a++;
     i++; 
  }
  i=0;
  while(s2[i]!='\0')
  {
     b++;
     i++; 
  }
  i=0;
  while(s1[i]!='\0')
  {
  if(s1[i]>='a'&&s1[i]<='z')
       {
          s1[i]=s1[i]-32;
       }
       i++;
  }
   i=0;
  while(s2[i]!='\0')
  {
  if(s2[i]>='a'&&s2[i]<='z')
       {
          s2[i]=s2[i]-32;
       }
       i++;
  }
  i=0;
  while(s1[i]==s2[i]&&s1[i]!='\0'&&s2[i]!='\0')
  {
      i++;
  }
  if(i==a&&i==b)
  printf("yes");
  else
  printf("no");
  return 0;
}
