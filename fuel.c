#include <string.h>
#include <stdio.h>
#include <math.h>
int cnt[222];
int main()
{
    int a,b,f,k;
    scanf("%d%d%d%d",&a,&b,&f,&k);
    int now=1;
    int you=b;
    int flag=1;
    int cnt=0;
    if(b<f||b<(a-f)) flag=0;
    if(k>=2&&b<2*(a-f)) flag=0;
    if(k>=3&&b<2*f) flag=0;
    if(!flag){
        printf("-1");
        return 0;
    }
    int aim=a-f;
    while(now!=k+1){
        you-=a-aim;
        if(now==k){
            if(you<aim){
                cnt++;
            }
            break;
        }
        else{
            if(you>=2*aim){
                you=you-aim;
                now++;
            }
            else{
                you=b-aim;
                cnt++;
                now++;
            }
            aim=a-aim;
        }
    }
    printf("%d\n",cnt);
   return 0;
}
