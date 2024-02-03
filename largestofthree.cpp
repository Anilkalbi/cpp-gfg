#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the largest:";
    cin>>a>>b>>c;
    if(a>=b and a>=c)
    {
        cout<<"a is largest:";
    }
    else if(b>=a and b>=c)
    {
        cout<<"b is largest:";
    }
    else
    cout<<"c is largest:";

}