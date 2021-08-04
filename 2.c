//whether a number n is palindrome number or not using function.
#include<stdio.h>
int pallin(int a)
{
    int r,rev=0;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    return rev;
}
int main()
{
    int n,a;
    printf("enter the value ");
    scanf("%d",&n);
    a=n;
    if (a==pallin(n))
    {
        printf("%d is pallindrome",a);
    }
    else{
        printf("not pallindrome");
    }
    return 0;
}