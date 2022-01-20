#include<stdio.h>
 
int fib(int);
 
int main()
{
   int n,sum=0;
 
   scanf("%d",&n);
 
   for (int i = 0 ; i < n ; i++ )
   {
      sum = sum + fib(i);
   }
   printf("%d",sum);
 
   return 0;
}
 
int fib(int n)
{
   if ( n == 0 || n==1)
      return n;
   else
      return ( fib(n-1) + fib(n-2) );
} 
