#include<stdio.h>
/*void printhello();  //declaration

int main(){
    printhello();  //function call
    return 0;
}
void printhello(){
    printf("hello!"); //function definition
}
void printhello();  //declaration

int main(){
    printhello(); 
    printhello();
    printhello();
    printhello(); //function call
    return 0;
}
void printhello(){
    printf("hello!\n");
    printf("iam shruti\n");//function definition
}*/
void namaste();
void bonjour();
 int main(){
    char ch;
    printf("enter i for indian and f for french:");
    scanf("%c",&ch);
    if(ch=='i'){
        namaste();                  
        
    }else{
        bonjour();
    }
    return 0;
 }
 void namaste(){
    printf("namaste");
 }
 void bonjour(){
    printf("bonjour");
 }