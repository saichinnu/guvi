#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100],i,c=0,j,n;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      { 
      	if(a[i]==a[j])
      	{
        printf("%d",a[i]);
        c++;
      	exit(0);
      	}
      }
   }
   if(c==0)
   printf("unique");
  return 0;
}
