#include<stdio.h>
int main()
{
   int n,a[60],i,j,c,s,m=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   {
      for(j=i+1;j<n-1;j++)
      {
          c=a[i]+a[j];
          s=j+1;
          if(a[i]<a[j])
          {
          while(s<n)
          {
             if(c==a[s])
             {
                if(m==0)
                {
                   m++;
                   printf("%d %d %d",a[i],a[j],a[s]);
                   break;
                }
                else
                {
                printf("\n%d %d %d",a[i],a[j],a[s]);
                break;
                }
             }
             s++;
          	 }   
          }      
      }
   }
   return 0;
}
