//the factorial of a number n by writing a recursive function for it.
#include<stdio.h>
int fact(int n1)
{
	if(n1>1)
	return n1*fact(n1-1);
	else
	return 1;
}
void main()
{
	int a;
	printf("enter the number");
	scanf("%d",&a);
	printf("factorial of %d is %d",a,fact(a));
}

