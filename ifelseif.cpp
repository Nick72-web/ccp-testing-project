#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number between 1 & 99999:" << endl ;
    cin >> num;
    if (num < 100 && num > 1)
    {
        cout << "Number is a two digit integer." << endl;
    }
    else if (num < 1000 && num > 100)
    {
        cout << "Number is a three digit integer." <<endl;
    }
    else if (num < 10000 && num > 1000)
    {
        cout << "Number is a four digit integer." << endl;
    }
    else
    {
        cout << "Out of range between 1 & 99999." << endl;
    }
    cout << "Thank you Mr PA.";
    return 0;
}
