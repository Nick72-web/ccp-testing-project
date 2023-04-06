#include<iostream>
using namespace std;
int main()
{
    int *p,var = 120;
    p =&var;
    cout << &p<<endl;
    cout << &var<<endl;
    cout <<p<<endl;
    cout <<var<<endl;
    cout <<*p<<endl;
    return 0;
}