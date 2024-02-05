#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0 or n==1)
    {
        cout<<"neither prime nor composite:";
        return 0;
    }
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<" no";
            return 0;
        }
        i++;
    }
cout<<"yes";
return 0;
}