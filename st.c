#include<stdio.h>
int main()
{
   int n,q,c[100],j,i,a[100],b[100],s,sum;
   scanf("%d%d",&n,&q);
   for(i=0;i<n;i++)
   scanf("%d",&c[i]);
   for(i=0;i<q;i++)
   { 
      scanf("%d%d",&a[i],&b[i]);
   }
   for(s=0;s<q;s++)
   {
       sum=0;
       for(j=a[s]-1;j<b[s];j++)
       {
         sum=sum+c[j]; 
       }
       if(s==q-1)
       printf("%d",sum);  
       else
       printf("%d\n",sum);
   }
   return 0;
}
