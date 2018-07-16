#include<stdio.h>
int main()
{
   int a[100],n,i,j,k,s1,s2,c=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   { 
     s1=0;
     s2=0; 
     for(j=i;j>=0;j--)
     s1=s1+a[j];
     for(k=i;k<n;k++)
     s2=s2+a[k];
     if(c==0)
     { 
     if(s1==s2)
     {
       c++;   
       printf("yes");
     }
     }   
   }
    if(c==0)
    printf("no");
    return 0;
}
