//whether a number num (num is entered through keyboard) is a number in the Fibonacci sequence or not.
#include<stdio.h>
int main()
{
    int a=1,b=1,n,c=0;
    printf("enter the number ");
    scanf("%d",&n);
    while(c<n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==n)
    {
        printf("entered number is in fibonnic series");
    }
    else{
        printf("entered number is not in fibonnic");
    }
    return 0;
}