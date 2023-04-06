#include<iostream>
using namespace std;
class teacher
{
    public:
    teacher()
    {
        cout << "Hey i am a teacher." <<endl;
    }
    string school = "Kabarak University";
};
class student: public teacher
{
    public:
    student()
    {
        cout <<"Yes a teacher by proffession." <<endl;
    }
    string name = "Nick Harmony";
    string book = "C++ programming language.";
};
int main()
{
    student obj;
    cout <<"My name is:" <<obj.name<<endl;
    cout <<"My institute is:" <<obj.school<<endl;
    cout <<"My career unit is:" <<obj.book<<endl;
    return 0;
}   