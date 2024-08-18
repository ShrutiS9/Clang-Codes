#include<iostream>
using namespace std;

int sum(int num1,int num2)
{
    int num3=num1 +num2;
    return num3;
}
int main()
{
    int num1,num2,n1,n2;
    cin >> num1 >> num2;
    int res=sum(num1,num2);
    cout << res << endl;

    cin >> n1 >>n2;
    int maximum=max(n1,n2);
    cout << maximum;
    return 0;
}

int max(int n1, int n2)
{
    if(n1>=n2)
        return n1;
   
    return n2;
}