//write a structure program to save student details
#include<iostream>
using namespace std;
struct student
{
    string name;
    string reg;
    int age;
};
int main()
{
    student s;
    cout << "Enter the name of the student:" <<endl;
    getline(cin,s.name);
    cout << "Enter the registration number of student:" <<endl;
    getline(cin,s.reg);
    cout << "Enter age of student:" <<endl;
    cin >> s.age;
    cout << "------STUDENT RECORDES--------"<<endl;
    cout <<"The name is:" <<s.name <<endl;
    cout <<"The registration is:" <<s.reg <<endl;
    cout <<"The age is:" <<s.age<<endl;
    cout <<"Thank You.";
    return 0;
}