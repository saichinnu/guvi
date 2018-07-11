#include<stdio.h>
int main()
{
    long int a,b,c=0;
    scanf("%d%d",&a,&b);
    for(a;a<=b;a++)
    {
       if(c==0)
       {
       if(a%2==0)
       { 
          printf("%d",a);
          c++;
       }
       }
       else
       {
        if(a%2==0)
       { 
          printf(" %d",a);
        }   
       }
    }
   return 0;
}
