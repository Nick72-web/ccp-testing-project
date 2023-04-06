#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    c = a * b;
    cout << "Answer for c is =" <<  c <<endl;
    if(c < 100)
    {
        cout << "c is less than 100" <<endl;
    }
    else
    {
        cout << "c is greater than 100" << endl;
    }
    cout << "Thank you Mr PA";
    return 0;
}