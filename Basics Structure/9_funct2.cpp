#include<iostream>
using namespace std;

// pass by reference
void dosomething(string s)
{
    s[0]='S';
    cout << s << endl;
}
int main()
{
    string s="shruti";
    dosomething(s);
    cout << s << endl;
   return 0;
}