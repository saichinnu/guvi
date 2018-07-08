#include<stdio.h>
int main()
{
  long int n,i,c=0;
  scanf("%ld",&n);
  for(i=2;i<n;i++)
  {
     if(n%i==0)
     c++;
  }
   if(n==1)
   c++;
   if(c>0)
   printf("yes");
   else
   printf("no");
   return 0;
}
