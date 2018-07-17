#include<stdio.h>
int main()
{
   int a[4],b[4],i,c=0,j;
   for(i=0;i<4;i++)
   {
      scanf("%d%d",&a[i],&b[i]);
   }
   for(i=0;i<4;i++)
   {
     for(j=1;j<4;j++)
     {
        if((a[i]-a[j])==0)
        {
          a[i]=0;
          a[j]=0;
        }
        if((b[i]-b[j])==0)
        {
           b[i]=0;
           b[j]=0;
        }
     }
   }
   for(i=0;i<4;i++)
   {
     if((a[i]!=0)||(b[i]!=0))
     c=c+1;
   }
   if(c==0)
   printf("yes");
   else
   printf("no");
   return 0;
}
