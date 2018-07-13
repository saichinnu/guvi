#include<stdio.h>
int main()
{
    float a[30][30],n,s=0,avg;
    int i,j;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
        scanf("%f",&a[i][j]);
       }
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
        s=s+a[i][j];
       }
    }
    avg=s/(n*n);
    printf("%f",avg);
    return 0;
}
