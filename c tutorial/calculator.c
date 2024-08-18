#include<stdio.h>
#include<math.h>
int main()
{
    int c;
    float a,b,root;
    printf("enter value of c:");
    scanf("%d",&c);
    printf("enter the value a :\n");
    scanf("%f",&a) ;
    printf("enter the value b:\n");
    scanf("%f",&b);
    printf("sum of a and b :%f\n",a+b);
    printf("subtraction of a and b:%f\n",a-b);
    printf("mul of a and b:%f\n",a*b);
    printf("div of a and b:%f\n",a/b);
    root=sqrt(c);
    printf(" the sqrt of %d is :%f\n",c,root);
    printf("the area circle:%f\n",3.14*a*a);
    printf("area of square:%f:\n",a*a);
    return 0;
}