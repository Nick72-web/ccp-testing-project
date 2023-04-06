//.Construct a C++ Program to Subtract 
//Complex Number Using Operator Overloading
#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex() {
            real = 0;
            imag = 0;
        }
        Complex(float r, float i) {
            real = r;
            imag = i;
        }
        Complex operator-(Complex const &obj) {
            Complex res;
            res.real = real - obj.real;
            res.imag = imag - obj.imag;
            return res;
        }
        void print() {
            cout << real << " - " << imag << "i" << endl;
        }
};

int main() {
    Complex num1(5.5, 4.2), num2(2.5, 1.6), res;
    res = num1 - num2;
    cout << "First complex number: ";
    num1.print();
    cout << "Second complex number: ";
    num2.print();
    cout << "Subtraction result: ";
    res.print();
    return 0;
}
