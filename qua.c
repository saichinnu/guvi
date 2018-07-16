#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n%10==0) 
    n=n/10;
    int s[22];
    int cnt=0;
    while(n)
    {
        s[++cnt]=n%10;
        n/=10;
    }
    int ans=1;
    for(int i=1;i<=cnt/2;i++)
    {
        if(s[i]!=s[cnt-i+1])
        {
            ans=0;
            break;
        }
    }
    if(ans)
    printf("yes");
    else 
    printf("no");
    return 0;
}
