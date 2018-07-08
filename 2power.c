#include<stdio.h>
int main()
{
    long int n,i,s=1,d,e=0;
    scanf("%ld",&n);
    for(i=1;s<n&&s!=n;i++)
    { 
      s=s*2;
        
    }
    if(s==n)
    e++;
    if(e==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
