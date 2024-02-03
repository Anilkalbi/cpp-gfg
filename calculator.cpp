#include<iostream>
using namespace std;
int main()
{
    int op,a,b;
    cout<<"enter the option:";
    cin>>op>>a>>b;
    if(op==1)
    {
        cout<<a+b;
    }
    else if(op==2)
    {
        cout<<a-b;
    }
    else if(op==3)
    {
        cout<<a*b;
    }
    else{
        cout<<"invalid option:";
    }

}