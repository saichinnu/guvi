#include<stdio.h>
int main()
{
 int i,n,a[40],c,max=0,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
    c=0;
    for(j=i+1;j<n;j++)
   {
      if(a[i]<a[j])
      {
        c++;    
        a[i]=a[j];
      }  
      if(a[i]==a[j])
      {
      	a[i]=a[j];
      }
   }
   if(c>max)
   {
       max=c;
   }
 } 
 printf("%d",(max+1));
 return 0;
}
