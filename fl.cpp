#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a;
    cout << "Enter a number";
    cin >> a;
    a *= a;
    a *= a;
    a = sqrtf(a) * sqrtf(a);
    cout << a;
}
