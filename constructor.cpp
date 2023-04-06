#include<iostream>
using namespace std;
class nick
{
    public:
    int num;
    char ch;
    nick()
    {
        num = 120;
        ch = 'a';
    }
};
int main()
{
    nick obj;
    cout << obj.num << endl;
    cout << obj.ch;
    return 0;
}