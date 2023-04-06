#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter a string:";
    getline(cin,str);
    cout << "You enter:" <<str << endl;
    str.push_back('w');
    cout << "The string after push_back:" <<str <<endl;
    str.pop_back();
    cout << "The string after pop_back:" <<str;
    return 0;
}