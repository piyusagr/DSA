// find the LCM of two numbers a and b by using a suitable function (say LCM)
#include<stdio.h>
int lcm(int a, int b)
{ 
    static int common = 1;
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
    return common;
}
int main()
{
    int n1,n2;
    printf("enter the number");
    scanf("%d%d",&n1,&n2);
    printf("lcm of %d and %d is %d",n1,n2,lcm(n1,n2));
}