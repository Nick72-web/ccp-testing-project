#include<iostream>
#include<cmath>
using namespace std;
void square(int arr[2][3])
{
    int temp;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            temp = arr[i][j];
            cout << pow(temp,2) << endl;
        }
    }
}
int main()
{
    int a[2][3] = {{32,3,4},{32,65,76}};
    square(a);
    return 0;
}