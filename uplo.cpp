//Write a program to check whether a entered character 
//is lowercase ( a to z ) or uppercase ( A to Z )
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a character:" <<endl;
    cin >> c;
    if(c >= 65 && c<= 90)
    {
        cout << "Entered character is UPPERCASE." << endl;
    }
    else if(c >= 97 && c <= 122)
    {
        cout << "Entered character is a LOWER CASE." <<endl;
    }
    else
    {
        cout << "Other symbol.";
    }
    return 0;
}