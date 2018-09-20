#include<stdio.h>
#include<math.h>
int main()
{
 int a[60],n,i,j,sum,su,mi,mj;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 sum=a[0]+a[1];
 mi=0;
 mj=1;
 for(i=0;i<n-1;i++)
 {
   for(j=i+1;j<n;j++)
   {
     su=a[i]+a[j];
     if(abs(sum)>abs(su))
     {
        sum=su;
        mi=i;
        mj=j;          
     }     
   }
 }
 printf("%d %d",a[mi],a[mj]);
 return 0;
}
