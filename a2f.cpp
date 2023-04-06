#include<iostream>
using namespace std;
int sum(int arr1[],int arr2[])
{
    int temp[5];
    for(int i=0;i<5;i++)
    {
        temp[i] = arr1[i] + arr2[i];
        cout << temp[i]<< endl;
    }
}
int main()
{
    int a[5] = {23,45,6,787,98};
    int b[5] = {43,65,76,56,34};
    sum(a,b);
    return 0;
}