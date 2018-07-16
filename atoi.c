#include<stdio.h>
#include<stdlib.h>
int main()
{
    char s1[100],s2[100];
    long int i,j,k;
    scanf("%s%s",s1,s2);
    i=atoi(s1);
    j=atoi(s2);
    k=i*j;
    printf("%ld",k);
    return 0;
}
