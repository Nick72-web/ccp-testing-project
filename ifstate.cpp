#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter a" <<endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    c = a * b;
    cout << "The answer is:" << c << endl;
    if(c < 200)
    {
        cout << c << endl << "Is less than 200" << endl;
        if(c > 100)
        {
            cout << c << endl << "Is greater ifstate.exe than 100";
        }
    } 
    if(c > 200)
    {
        cout << c << endl << "Is greater than 200." << endl;
    }
    return 0;     
}