#include<stdio.h>
int main()
{
int a[10],n,i,s=0,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
c=a[i]-a[0];
s=s+c;
}
if(s>0)
printf("%d",s);
else
printf("0");
return 0;
}
