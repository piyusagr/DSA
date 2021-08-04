// find the first digit of a number using function
#include<stdio.h>
#include<math.h>
int countdigit(int n)
{
    int a=n;
    static int count=0;
    if(a>0)
    {
        count+=1;
        countdigit(a/10);
    }
    return n/pow(10,count-1);
}
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    printf("first number of digits in %d is %d",a,countdigit(a));
}