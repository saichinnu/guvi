#include<stdio.h>
#include<string.h>
int main()
{
  char q[300];
  int i,n,b,j,t,s,k;
  b=1e6;
  scanf("%s",q);
  n=strlen(q);
  for(i='a';i<='z';i++)
  {
     t=0,s=0;
     for(j=0;j<n;j++)  
     {
        if(q[j]==i)
        s=0;
        else
        s++;
        t=(s>t)?s:t;
     } 
     b=(t<b)?t:b;   
  }
  printf("%d",(b+1));
  return 0;
}
