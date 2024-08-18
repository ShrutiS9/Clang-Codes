#include<stdio.h>/*int main(){
    int a;
    printf("enter value:");
    scanf("%d",&a);
    int i=0;
    while(i<=a){
        printf("%d\n",i);
        i++;
    }
    return 0;
}*/
int main(){
    int a;
    printf("enter value:");
    scanf("%d",&a);
    int i=1,multi=1;
    while(i<=a){
        multi*=i;
        i++;
    }printf("sum:%d\n",multi);
    return 0;
}