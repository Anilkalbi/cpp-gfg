#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    try{
        if(y==0)
        throw 0;
        cout<<"result is"<<x/y;
    }
    catch(int x)
    {
        cout<<"divisor is zero";
    }
    return 0;
}