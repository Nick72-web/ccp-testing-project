#include<iostream>
using namespace std;
int main()
{
    int dividend, divisor, quotient, remainder
    ;
    cout << "Enter divinded:\n";
    cin >> dividend;
    cout << "Enter divisor:\n";
    cin >> divisor;
    
    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    cout << "\nThank You For Coding With Nick.";

}