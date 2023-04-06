//Create a C++ code to Print out the 
//Fibonacci Triangle using an X character
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows in the Fibonacci Triangle: ";
    cin >> n;
    
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                cout << "X ";
            } else {
                cout << "X ";
                c = a + b;
                a = b;
                b = c;
            }
        }
        cout << endl;
    }
    
    return 0;
}
