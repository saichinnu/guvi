#include<stdio.h>
int main()
{
 int n1,n2,a[60],b[60],i,count=0,j;
 scanf("%d%d",&n1,&n2);
 for(i=0;i<n1;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n2;i++)
 scanf("%d",&b[i]);
 for(i=0;i<n2;i++)
 {
    for(j=0;j<n1;j++)
    {
         if(b[i]==a[j])
         {
            count++;
            break;
         }
    }
 }
 if(n2==count)
 printf("YES");
 else
 printf("NO");
 return 0;
}
