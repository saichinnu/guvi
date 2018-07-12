#include <stdio.h>
int main()
{
    long int n,i,j,a[100],temp=0,k;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
          { 
              if(a[i]<a[j])
               {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                }
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
