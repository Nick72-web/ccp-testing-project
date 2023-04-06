#include<iostream>
using namespace std;
class nick
{
    private:
    int num;
    char ch;
    public:
    void harmony(int num,char ch)
    {
        this -> num=num;
        this -> ch=ch;
    }
    void diplay()
    {
        cout << num <<endl;
        cout << ch;
    }
};
int main()
{
    nick arr;
    arr.harmony(189,'B');
    arr.diplay();
    return 0;
}

