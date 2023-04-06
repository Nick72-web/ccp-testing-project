/*5.Construct a C++ program for this case: A student will not be allowed to sit in exam if his/her attendance is less than 80%.
*Take following input from user
*Number of classes held
*Number of classes attended.
*And print
*percentage of class attended
*Is student is allowed to sit in exam or not*/
#include<iostream>
using namespace std;
int main()
{
    // a is the number of classes held
    // b is the number of classes attended
    int a = 14;
    float b;
    float percent;
    cout << "Enter number of classes attended:" <<endl;
    cin >>b;
    percent = b / a * 100;
    cout <<"Student percentage is:" <<percent<<endl;
    if (percent >= 80)
    {
        cout <<"The student is allowed to sit for the exam." << endl;
    }
    else
    {
        cout << "The student is not qualified to sit for exam.";
    }
    return 0;
}
