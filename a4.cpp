//function takes a number as an argument, add one to the number, and return the result
#include<iostream>
using namespace std;
int sum(int a)
{
    int s= a + 1;
    return s;
}
int main()
{
    int num;
    cout <<"Enter a number:" <<endl;
    cin >> num;
    cout <<"The number after one is added is:" << sum(num) <<endl;
    return 0;
    
}