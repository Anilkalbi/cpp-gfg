#include<iostream>
using namespace std;
union text
{
    int x;
    int y;
};
int main()
{
    text t;
    t.x=10;
    cout<<t.x<<" "<<t.y<<endl;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
    cout<<sizeof(t);
    return 0;
}