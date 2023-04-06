//.Create a C++ Program that find the
// frequency of Characters in a String
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int freq[256] = {0}; // initialize frequency array to 0
    
    // calculate frequency of each character in the string
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }
    
    // print frequency of each character
    cout << "Frequency of characters in the string:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << "'" << (char)i << "' occurs " << freq[i] << " time(s)" << endl;
        }
    }
    
    return 0;
}
