#include<stdio.h>
void calculateprice(float a);

int main(){
    float a=100.0;
    calculateprice(a);
   // printf("final price:%f\n",a);
    return 0;
}
void calculateprice(float a){
    a+=a*0.18;
   printf("final gst including price:%f\n",a);
}