#include<iostream>
using namespace std;
int per(int l,int w)
{
    int per = 2 *(l + w);
    return per;
}
int main()
{
    int l,w;
    cout << "Enter length:" << endl;
    cin >> l;
    cout << "Enter width:" << endl;
    cin >> w;
    cout << "The perimeter is :" << per(l,w);
    return 0;
}