#include<stdio.h>
#include<string.h>
int main()
{
  char a[100];
  int i,n;
  gets(a);
  n=strlen(a);
  for(i=0;i<=n;i=i+2)
  {
     if(a[i]!=' ')
     {
       a[i]=a[i]-32; 
     }
     if(a[i]==' ')
     {
       i++;
       a[i]=a[i]-32;
     }
  }
  for(i=0;i<n;i++)
  printf("%c",a[i]);
  return 0;
}
