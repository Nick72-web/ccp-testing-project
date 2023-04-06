//Create a C++ Program to Concatenate Two Strings
#include<iostream>
using namespace std;
int main()
{
    string num,is;
    cout << "Enter first word to be concatenate:"<<endl;
    getline(cin,num);
    cout << "Enter second word to concatenate:"<<endl;
    getline(cin,is);
    cout <<"Words entered are:" <<num<<" " <<is;
    return 0;
}