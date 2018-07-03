#include <stdio.h>
void main()
{
    char c;
    int i,j;
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
    {
    i=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    j=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if (i||j)
        printf("Vowel");
    else
        printf("Consonant");
    }
    else
    printf("invalid");
}