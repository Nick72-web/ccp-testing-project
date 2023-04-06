//2Write a function that converts number of Hours into Seconds
#include<iostream>
using namespace std;
int seconds(int h)
{
    int sec;
    sec = h * 3600;
    return sec;
    cout << sec ;
}
int main()
{
    int hours;
    cout << "Enter the number of hours:" <<endl;
    cin >> hours;
    cout << "The number of hours you entered in seconds is:" << seconds(hours) <<endl;
    cout <<"Thank you.";

}