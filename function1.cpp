#include<iostream>
using namespace std;
    void func2()
    {
        cout<<"inside fun2:"<<"\n";
    }
    void func1()
    {
        cout<<"before fun2:"<<"\n";
        func2();
        cout<<"after fun2:"<<"\n";
    }
    int main()
    {
        cout<<"before fun1():"<<"\n";
        func1();
        cout<<"after fun1():"<<"\n";
        return 0;
    }