#include <iostream>
using namespace std;
int main(){
 int num =10;
 while(num<=200) {
 cout<<"Value of num is: "<<num<<endl;
 if (num==100) {
 break;
 }
 num ++;
 }
 cout<<"Hey, I'm out of the loop";
 return 0;
}