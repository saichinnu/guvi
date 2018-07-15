#include<stdio.h>
#include<string.h>
int main()
{
char a[100],t;
int i,j,x,f;
scanf("%s",&a);
for(i=0;i<strlen(a);i=i+2)
{ 
t=a[i]; 
if((a[i+2]-48)>=0&&(a[i+2]-48)<=9) 
{ 
int x; 
x=((a[i+1]-48)*10)+(a[i+2]-48); 
for(f=0;f<x;f++) 
{ 
printf("%c",t); 
} 
i++; 
}
else
{
for(j=0;j<a[i+1]-48;j++)
{
printf("%c",t);
}
}
}
return 0;
}
