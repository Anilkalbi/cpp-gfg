/*
1)find the min of a,b
2)iteration from 1 to min(a,b)
find if any no dividing a&b then take that value as ans
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the number:";
    cin>>a>>b;
    int x=min(a,b);
    int ans=1;
    for(int i=1;i<=x;i++)
    {
        if(a%i==0 and b%i==0)
        ans=i;
    }
    cout<<ans;
}