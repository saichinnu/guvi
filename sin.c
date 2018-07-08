#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main()
{
   double a,b,c;
   scanf("%lf",&a);
   b=a*(PI/180);
   c=sin(b);
   printf("%f",c);
   return 0;
}
