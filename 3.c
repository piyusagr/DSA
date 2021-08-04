//count number of digits of a positive integer n by using recursion.
#include<stdio.h>
int countdigit(int n)
{
    static int count=0;
    if(n>0)
    {
        count+=1;
        countdigit(n/10);
    }
    else{
        return count;
    }
}
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    printf("number of digits in %d is %d",a,countdigit(a));
}