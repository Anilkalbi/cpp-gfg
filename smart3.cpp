#include<iostream>
using namespace std;
class test
{
    public:
    int x,y;
    test(int a=0,int b=0)
    {
        x=a;
        y=b;
        cout<<"constructor is called:\n";
    }
    ~test()
    {
        cout<<"destructor is called:\n";
    }
};
int main()
{
    cout<<"main begin:\n";
    {
        test *p=new test(10,20);
    }
    cout<<"main ends:";

}