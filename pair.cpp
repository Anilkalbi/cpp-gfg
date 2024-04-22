//compairson of pair
#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1(1,10),p2(10,5);
    cout<<(p1==p2)<<" "<<(p1!=p2)<<" "<<(p1>p2)<<" "<<(p1<p2)<<" "<<endl;
    return 0;
}