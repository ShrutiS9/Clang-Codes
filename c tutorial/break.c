#include<stdio.h>/*
int main(){
    for(int i=1;i<=5;i++){
        if(i==3){
            break;
        }
        printf("%d\n",i);
    }
    printf("end");
    return 0;
}
int main(){
    int n;
    do{
        printf("enter value:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}*/
int main(){
    int n;
    do{
        printf("enter value:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0){
            break;
        }
    }while(1);
    printf("thank you");
    return 0;
}