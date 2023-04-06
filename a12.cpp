/*Inheritance concept allows a programmer to create a new class from and existing one. Write a C++ program code to display the output below using Inheritance                          
*Hey Guys, I am a teacher 
*I am a Math Teacher 
*Name: Negan 
*College Name: Beginnersbook 
*Main Subject: Math*/

#include <iostream>
#include <string>
using namespace std;

class Teacher {
    protected:
        string name;
        string collegeName;
    public:
        Teacher() {
            name = "Unknown";
            collegeName = "Unknown";
        }
        Teacher(string n, string cn) {
            name = n;
            collegeName = cn;
        }
        void display() {
            cout << "Hey Guys, I am a teacher" << endl;
        }
};

class MathTeacher : public Teacher {
    private:
        string mainSubject;
    public:
        MathTeacher(string n, string cn) : Teacher(n, cn) {
            mainSubject = "Math";
        }
        void display() {
            cout << "I am a Math Teacher" << endl;
            cout << "Name: " << name << endl;
            cout << "College Name: " << collegeName << endl;
            cout << "Main Subject: " << mainSubject << endl;
        }
};

int main() {
    MathTeacher t("Negan", "Beginnersbook");
    t.display();
    return 0;
}
