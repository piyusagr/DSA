#include<stdio.h>

int main()
{
    int n,rev=0,b,c,count=0,d=0;
    printf("enter the number to check:");
    scanf("%d",&n);
    b=n;
    while(b>0)
    {
      c=b%10;
      rev=(rev*10)+c;
      b=b/10;
    }
    while(rev>0)
    {
        c=rev%10;
        count++;
        if(count%2==1)
        d=(d*10)+c;
        rev=rev/10;
    }
    printf("the number with out evenplace value is %d",d);
 return 0;
}