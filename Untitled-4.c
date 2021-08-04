#include<stdio.h>
void Fibonacci(int);
int main()
{
int k,n;
long int i=0,j=1,f;

printf("Enter the range of the Fibonacci series: ");
scanf("%d",&n);

printf("Fibonacci Series: ");
printf("%d %d ",0,1);
Fibonacci(n);
return 0;
}
void Fibonacci(int n)
{
static long int first=0,second=1,sum;

if(n>0)
{
sum = first + second;
first = second;
second = sum;
printf("%ld ",sum);
Fibonacci(n-1);
}
}