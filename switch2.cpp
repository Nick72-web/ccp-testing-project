#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any Intager:" << endl;
    cin >> num;
    switch (num)
    {
    case 1:
    cout << "Case 1:Value is" << num <<endl;
    break;
    case 2:
    cout << "Case 2:Value4 is" << num <<endl; 
    break; 
    case 3:
    cout << "Case 3:Value is" << num <<endl;
    break;
    case 4:
    cout << "Case 4:Value is" << num <<endl;
    break;
    default:
    cout << "Default:Value is" << num <<endl;
    }
    return 0;
}