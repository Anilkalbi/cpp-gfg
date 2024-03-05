#include<iostream>
#include<memory>
using namespace std;
class test
{
    int x;
    public:
    test(int a=0)
    {
        x=a;
        cout<<"constructor \n";
    }
    ~test()
    {
        cout<<"destructor\n";
    }
    void fun()
    {
        cout<<x<<endl;
    }
};
int main()
{
    cout<<"main begin\n";
    {
        unique_ptr<test>ptr=make_unique<test>(10);
        ptr->fun();
    }
    cout<<"main ends\n";
    return 0;
}