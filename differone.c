#include<stdio.h>
#include<string.h>
int main()
{
   char a[50],b[50];
   int n,i,j,c=0;
   scanf("%s%s",a,b);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
      if(a[i]==a[j])
      {
         c++; 
      }
   }
   if(c==n-1)
   printf("yes");
   else
   printf("no");
   return 0;
}
