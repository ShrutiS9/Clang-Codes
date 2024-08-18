#include<iostream>
using namespace std;
void dosomething(int arr[],int n)
{

    arr[0]+=100;
    cout << "value inside function : " << arr[0] << endl;
}
int main()
{
    int n=5;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    dosomething(a,n);
    cout << "value inside int main: " << a[0] << endl; 
    return 0;
}