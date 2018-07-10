#include<stdio.h>
int main()
{
   int n,a[40],i,j,max=0,num,c;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
     c=1;
     for(j=i+1;j<n;j++)
     {
        if(a[j]==a[i])
        { 
          c++; 
        }
        if(c>max)
        {
          max=c;
          num=a[j];
        }
     }
   }
   printf("%d",num);
   return 0;
}
