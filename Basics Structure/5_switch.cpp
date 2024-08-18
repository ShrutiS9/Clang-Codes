#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    switch (n)
    {
    case 1:
       cout << "Mon";
        break;
    case 2:
       cout << "Tue";
        break;
    case 3:
       cout << "Wed";
        break;
    case 4:
       cout << "Thurs";
        break;
    case 5:
       cout << "fri";
        break;
    case 6:
       cout << "Sat";
        break;
    case 7:
       cout << "Sun";
        break;
    
    default:
    cout << " enter valid number";
        break;
    }

    return 0;
}