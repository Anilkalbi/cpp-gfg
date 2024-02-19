#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
    cout<<"this is an car:"<<endl;
    }
};
class brand:public vehicle //an class derived from base class
{
    public:
    brand()
    {
    cout<<"this is an BMW:"<<endl;
    }
};

class type:public brand//an class derived from another derived class
{
    public:
    type()
    {
    cout<<"this is an 4 wheeler:"<<endl;
    }

};
int main()
{
    type obj;//we hv created an object of class name type(derived class) which will print mf of super class ;
   // obj.print2();if we want print class type member function;
}