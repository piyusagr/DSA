#include<stdio.h>
int sum(int a)
{
  int i;
  if(a==0)
  return 0;
  if(((a%10)%2)==0)
  return a%10+sum(a/10);
  else
  return sum(a/10);
}
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the sum of even number is %d",sum(n));
 return 0;
}