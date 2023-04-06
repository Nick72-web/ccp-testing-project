#include <iostream>
using namespace std;
char myVar = 'A';//This is a global variable
char myFuncn() {
 char myVar = 'B';//This is a local variable
 return myVar;
}
int main()
{
 cout <<"Funcn call: "<< myFuncn()<<endl;
 cout <<"Value of myVar: "<< myVar<<endl;
 myVar='Z';
 cout <<"Funcn call: "<< myFuncn()<<endl;
 cout <<"Value of myVar: "<< myVar<<endl;
 return 0;
}