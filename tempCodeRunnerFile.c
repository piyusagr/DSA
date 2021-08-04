#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,n,min,max,count=0,*arr;
    scanf("%d%d%d",&n,&min,&max);
    arr=(int*)malloc(n*sizeof(int));
    for( i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    for(i=0;i<=n;i++)
    {
        if(*(arr+i)>=min&&*(arr+i)<=max)
        printf(" numbers are %d\t",*(arr+i));
        count++;
    }
    printf("\n%d",count);
    return 0;
}