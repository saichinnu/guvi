#include <stdio.h>
int main()
{
    long int num,i,j,a[10],n=0,temp=0,k;
    scanf("%ld",&num);
    scanf("%ld",&k);
    while(num!=0)
    {
        a[n]=num%10;
        num=num/10;
        n++;
    }
    
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
          { 
              if(a[i]<a[j])
               {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;}
               }
           temp=0;
    }
    
    for(i=0;i<n;i++)
    {
       temp=(temp*10)+a[i];
    }
    printf("%ld",temp);
   return 0;
}
