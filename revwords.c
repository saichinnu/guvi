#include <stdio.h>
int main()
{
    int n,q,ar[20],x[20],a[20],b[20],i,j,y[20],s,t,gcd;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<q;i++){
        scanf("%d %d",&x[i],&y[i]);
    }
    for(i=0;i<q;i++){
        s=x[i]-1;
        t=y[i]-1;
    for(j=1;j<ar[s]+1;j++){
        if (ar[s]%j==0 && ar[t]%j==0)
            gcd=j;
    }
    if(i==q-1)
    printf("%d",gcd);
    else
    printf("%d\n",gcd);
    }
    return 0;
}
