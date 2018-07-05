#include<stdio.h>
#include<string.h>
void main()
{   
    char a[15];
    gets(a);
    if((strcmp(a,"Monday"))==0||(strcmp(a,"Tuesday"))==0||(strcmp(a,"Wednesday"))==0||(strcmp(a,"Thursday"))==0||(strcmp(a,"Friday")==0))
    printf("no");
    else if((strcmp(a,"Saturday")==0)||(strcmp(a,"Sunday")==0))
    printf("yes");
    else
    printf("Invalid Input");
}