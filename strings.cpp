#include<iostream>
using namespace std;
int main()
{
    char book[10];
    cout << "Enter your favourite book:" <<endl;
    cin.get(book,10);
    cout << "You enter:" << book;
    return 0;
}