//we will get compiler error bcoz we can't ptr2=ptr1 in unique pointer
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
        cout<<"constructor\n";
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
    unique_ptr<test>ptr1=make_unique<test>(10);
    unique_ptr<test>ptr2=ptr1;
    return 0;
}