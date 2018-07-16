#include<stdio.h>
int main()
{
   int n,q,c[100],j,i,a[100],b[100],min,s,t;
   scanf("%d%d",&n,&q);
   for(i=0;i<n;i++)
   scanf("%d",&c[i]);
   for(i=0;i<q;i++)
   { 
      scanf("%d%d",&a[i],&b[i]);
   }
   for(i=0;i<q;i++)
   {
       min=c[i];
       s=a[i]-1;
       t=b[i]-1;
       for(j=s;j<t+1;j++)
       {  
          if(min>c[j])
          min=c[j];
       }
      if(i==0)
      printf("%d",min);
      else
      printf("\n%d",min);
   }
   return 0;
}
