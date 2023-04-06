#include<iostream>
using namespace std;
class nick
{
    public:
    int sum(int a,int b)
    {
        return a + b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    nick ford;
    cout <<ford.sum(2,3)<< endl;
    cout <<ford.sum(2,3,4);
    return 0;
}
