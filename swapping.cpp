#include<iostream>
using namespace std;
int main()
{
    int a=5, b=10, temp;
    cout << "Before swapping:\n";
    cout << "a=" << a <<",b=" <<b <<endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping:\n";
    cout << "a=" << a << ",b=" << b << endl;
    return 0;

}