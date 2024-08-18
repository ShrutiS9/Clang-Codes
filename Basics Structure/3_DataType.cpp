#include<iostream>
using namespace std;

int main()
{
    int x=10;
    cout << "value of  x is " << x << endl;

    long long y=6576436894784879;
    cout << "value of  y is " << y << endl;

    float f=34675.674;
    cout << "value of  f is " << f << endl;

    float f1=34675;
    cout << "value of  f1 is " << f1 << endl;

    long double a=13432;
    cout << "value of  a is " << a << endl;

//it will take the words 
    // string s1,s2;
    // cin >> s1 >>s2;
    // cout << s1 <<" "<< s2 << endl;
    //it will take the whole string 
    string str;
    getline(cin,str);
    cout << str;
    return 0;
}