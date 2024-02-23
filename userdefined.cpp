#include<iostream>
#include<exception>
using namespace std;
class myexception:public exception
{
    virtual const char * what() const throw()
    {
        return "exception occurred\n";
    }
};
int main()
{
    try
    {
        throw myexception();
    }
    catch(exception &e)
    {
        cout<<e.what();
    }
}