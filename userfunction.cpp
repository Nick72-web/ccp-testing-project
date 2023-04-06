#include<iostream>
#include<cmath>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
     return c;
}
int main()
{
    int a , b;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    cout << "The value of c is: " << sum(a,b);
}