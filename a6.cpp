//Write a C++ Program to Make a Simple Calculator to Add,
//Subtract, Multiply or Divide Using switch...case
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char v;
    int add,substraction,division,multiply;
    cout << "Type a for addition and enter to proceed:"<<endl;
    cout << "Type s for substraction and enter to proceed:" <<endl;
    cout << "Type d for division and enter to proceed:" << endl;
    cout << "Type m for multiplication and enter to proceed:" <<endl;
    cin >> v;
    switch (v)
    {
        case 'a':
        cout <<"Enter a:" <<endl;
        cin >> a;
        cout <<"Enter b:" <<endl;
        cin >> b;
        add = a + b;
        cout <<"Addition of a and b is:" <<add<<endl;
        break;

        case 's':
        cout <<"Enter a:" <<endl;
        cin >> a;
        cout <<"Enter b:" <<endl;
        cin >> b;
        substraction = a - b;
        cout <<"Substraction of a and b is:" << substraction <<endl;
        break;

        case 'd':
        cout <<"Enter a:" <<endl;
        cin >> a;
        cout <<"Enter b:" <<endl;
        cin >> b;
        division = a / b;
        cout <<"Division of and b is:" <<division <<endl;
        break;

        case 'm':
        cout <<"Enter a:" <<endl;
        cin >> a;
        cout <<"Enter b:" <<endl;
        cin >> b;
        multiply = a * b;
        cout << "Multiplication of a and b is:" <<multiply<<endl;
        break;

        default:
        cout << "                    ************                   "<<endl;
        cout << "You have entered wrong choice try again.Never give up!";
        break;
    }
    return 0;
}