#include <iostream>
using namespace std;
void multiply(int arr1[], int arr2[])
{
    int temp[10];
    for (int i = 0; i < 10; i++)
    {
        temp[i] = arr1[i] * arr2[i];
        cout << temp[i] << endl;
    }
}
int main()
{
    int a[10] = {21, 34, 56, 753, 65, 78, 8, 653, 234, 67};
    int b[10] = {32, 4543, 5664, 23, 4565, 3234, 6, 76, 53, 25};
    // connecting array to a fuction
    multiply(a, b);
    return 0;
}