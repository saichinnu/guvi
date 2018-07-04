#include<stdio.h>
void main()
{
   int n,a[100],i,c,d=0,e=0,j[20],l=0,s,k;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
      d=0;
      e=0;
      c=a[i];
      while(e<n)
      {
         if(c==a[e])
         {
           d++;
         }     
           e++;     
      }

      if(d>1)
      {
        j[l]=c;
        l++;                        
      }        
   }
   if(l!=0)
   { 
   for(i=0;i<l;i++)
    {
        for(s=i+1;s<l;)
        {
            if(j[s] ==j[i])
            {
                for(k=s;k<l;k++)
                {
                    j[k]=j[k+1];
                }
                l--;
            }
            else
            {
                s++;
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%d ",j[i]);
    } 
   }
   else
   printf("unique");     
}