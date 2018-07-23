#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
int countWays(int s)
{
    return fib(s + 1);
} 
int main ()
{
  int s;
  scanf("%d",&s);
  printf("%d",countWays(s));
  getchar();
  return 0;
}
