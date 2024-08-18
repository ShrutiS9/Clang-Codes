#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values:\n");
    scanf("%d%d",&a,&b);
    printf("the smaller value:%d\n",a<b?a:b);
    return 0;
}