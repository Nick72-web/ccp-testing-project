#include<iostream>
using namespace std;
int main()
{
    int j = 5;
    do
    {
        if (j == 9)
        {
           j++;
           continue; /* code */
        }
        
        cout << "j is:" << j << endl; j++;
        /* code */
    } while (/* condition */j < 15);
    
}