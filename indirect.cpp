#include<iostream>
using namespace std;
int fa(int);
int fb(int);
int fa(int n)
{
    if(n <= 1)
    return 1;
    else
    return n * fb(n-1);
}
int fb(int n)
{
    if(n <= 1)
    return 1;
    else
    return n * fa(n-1);
}
int main()
{
    int a,b;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    cout << "The factor of a is:" << fb(a) << endl;
    cout << "The factor of b is:" << fa(b) << endl;
    cout << "Always trust the process and be patient.";
    return 0;
}