#include<iostream>
using namespace std;
int main()
{
    int a;
   for(a = 10;a <=20; a++)
   {
    if(a == 15)
    {
        continue;
    }
    cout << a << " " << endl;
   }
   cout << "Thank you Nick";
   return 0;
   
    
}