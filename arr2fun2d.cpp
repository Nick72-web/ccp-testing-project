//program to connect multi d array to a function
#include<iostream>
#include<cmath>
using namespace std;
void sum(int arr1[2][3])
{
    int temp;
    {
        for(int i = 0;i < 2;i++)
        {
            for(int j = 0;j < 3;i++)
            {
                temp = arr1[i][j] *2;
                cout << temp << endl;
                cout << pow(temp,2) << endl;
            }
        }
    }
}
int main()
{
    int a[2][3] = {{2,3,4},{6,7,8}};
    sum(a);
    return 0;
}