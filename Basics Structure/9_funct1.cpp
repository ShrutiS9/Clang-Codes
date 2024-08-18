#include<iostream>
using namespace std;

//pass by value 
void dosomething(int num)
{
    cout << num << endl;
    num+=5;
    cout << num << endl;
    num+=5;
    cout << num << endl;
}
int main()
{
    int num;
    cin >> num;
    dosomething(num);
    cout << num;
    return 0;
}