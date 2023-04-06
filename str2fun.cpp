//how to connect structure to function
#include<iostream>
using namespace std;
struct student
{
    string name;
    string reg;
    int age;
};
void nick(student);
int main()
{
    student s;
    cout <<"Enter student name:" <<endl;
    getline(cin,s.name);
    cout <<"Enter student Reg No:"<< endl;
    getline(cin,s.reg);
    cout<< "Enter student age:" <<endl;
    cin >> s.age;
    nick(s);
    return 0;
}
void nick(student s)
{
    cout <<"------Student * Records--------" <<endl;
    cout <<"Student Name is:" <<s.name<<endl;
    cout <<"Student Reg No is:" <<s.reg<<endl;
    cout <<"Student Age is:" <<s.age<<endl;
}