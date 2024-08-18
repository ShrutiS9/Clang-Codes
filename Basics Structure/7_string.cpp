#include<iostream>
using namespace std;
int main()
{
    string s="shruti";
    cout << s[5] << endl;
    int len=s.size();
    cout << s[len -1] << endl;
    s[len -1]='s' ;
    cout << s;
    
    return 0;

}