#include<stdio.h>
/*
int main(){
    int a;
    printf(" enter the value:");
    scanf("%d",&a);
    printf("%d\n",9<a&&100>a);
    return 0;
}
*/
int main(){
    float a,b,c;
    printf("enter the value :\n");
    scanf("%f%f%f",&a,&b,&c);
    printf("the average of 3 number:%f",(a+b+c)/3);
    return 0;
}