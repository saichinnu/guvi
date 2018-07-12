#include<stdio.h>
int main()
{
  long int num,n,a[100],s,i,j,temp;
  scanf("%ld",&num);
  s=num;
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
                 a[j]=temp;
               }
           }
           temp=0;
    }
    for(i=0;i<n;i++)
    {
       temp=(temp*10)+a[i];
    }
   if(s==temp)
   printf("impossible");
   else
   printf("%ld",temp);
  return 0;
}
