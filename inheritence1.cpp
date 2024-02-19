#include<iostream>
using namespace std;
class parent//super class
{
    public:
    int a;
    
};
// a class child is derived from claass parent which will access the contian present in super class
class child:public parent
{
    public:
    float b;
    void print(int a)
    {
        cout<<"value of a:"<<a<<endl;
    }
    void print1(float b)
    {
        cout<<"value of b:"<<b;
    }
};
int main()
{
    child obj;
    obj.print(10);
    obj.print1(11.5);
}