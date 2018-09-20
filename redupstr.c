#include<stdio.h>
int main()
{
 char s[100],i=0,j,n,c=0,a[100];
 scanf("%s",s);
 while(s[i]!='\0')
 {
    i++;
 }
 n=i;
 for(i=0;i<n;i++)
 {
   for(j=0;j<i;j++)
   {
     if(s[i]==s[j])
     break;
   }  
     if(j==i)
     a[c++]=s[i];   
 }
 printf("%s",a);
 return 0;
}
