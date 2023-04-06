#include<iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    int age;
};
int main()
{
    student n;
    cout <<"Enter name of the student:" <<endl;
    getline(cin,n.name);
    cout << "Enter student roll number:" <<endl;
    cin >> n.roll;
    cout <<"Enter the age of the student:" << endl;
    cin >> n.age;
    cout <<"-----------------STUDENT RECORDS------------------" <<endl;
    cout <<"Name of the student is:" <<n.name << endl;
    cout <<"Student roll number is:" <<n.roll << endl;
    cout <<"The age of the student is:" <<n.age <<endl;
    cout << "THank You.";
    return 0;
}    

