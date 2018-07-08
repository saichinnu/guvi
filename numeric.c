#include<stdio.h>
#include<string.h>
int main()
{
    char a[30];
    int i,s,b=0;
    gets(a);
    s=strlen(a);
    for(i=0;i<s;i++) 
    { 
       if((a[i]>='0')&&(a[i]<='9'))
       {
       b++;
       }
    }      
    if(b==s)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }
    return 0;
}
