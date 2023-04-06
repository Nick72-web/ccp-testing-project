#include<iostream>
using namespace std;
int main()
{
    int arr[2][3][2] = {{{2,3},{4,5},{6,7}},{{21,23},{34,65},{67,98}}};
    for(int x = 0; x < 2 ; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            for(int z = 0; z < 2; z++)
            {
                cout <<"arr["<<x<<"]["<<y<<"]["<<z<<"]:" <<arr[x][y][z] <<endl;
            }
        }
    }
    return 0;
}