// calculate x^y(x power y) by writing a function(say POWER) for it.
#include<stdio.h>
#include<math.h>
int POWER(int a,int b)
{
    return pow(a,b);
}
int main()
{
    int x,y;
    printf("enter the base and power ");
    scanf("%d%d",&x,&y);
    printf("power of %d^%d  is %d",x,y,POWER(x,y));
    return 0;
}