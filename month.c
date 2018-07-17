#include<stdio.h>
int main()
{ 
   char a[30],i,b[20];
   scanf("%s",&a);
   if(a[3]=='0'&&a[4]=='1')
   printf("January");
   else if((a[3]=='0') && (a[4]=='2'))
   printf("February");
   else if(a[3]=='0'&&a[4]=='3')
   printf("March");
   else if(a[3]=='0'&&a[4]=='4')
   printf("April");
   else if(a[3]=='0'&&a[4]=='5')
   printf("May");
   else if(a[3]=='0'&&a[4]=='6')
   printf("June");
   else if(a[3]=='0'&&a[4]=='7')
   printf("July");
   else if(a[3]=='0'&&a[4]=='8')
   printf("August");
   else if(a[3]=='0'&&a[4]=='9')
   printf("September");
   else if(a[3]=='1'&&a[4]=='0')
   printf("October");
   else if(a[3]=='1'&&a[4]=='1')
   printf("November");
   else if(a[3]=='1'&&a[4]=='2')
   printf("December");
   return 0;
}
