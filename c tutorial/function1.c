#include<stdio.h>
/*int sum(int a,int b);
int main(){
    int a,b;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    int s=sum(a,b);
    printf("the sum is %d",s);
    return 0;
    }
    int sum(int x,int y){
        return x+y;
    }*/
 void printtable(int n);
 int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printtable(n);
    return 0;
 }
 void printtable(int n){
    for(int i=1;i<=10;i++){
    printf("%d\n",n*i);
    }
 }
