#include<iostream>
using namespace std;
int main()
{
    int *r;
    int nick[] = {1,23,4,544,67,76};
    r = nick;
    for (int i = 0; i < 6; i++)
    {
        cout << *r <<endl;
        r++;
        
    }
    return 0;
    
}