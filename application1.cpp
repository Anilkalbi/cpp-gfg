#include<iostream>
using namespace std;
union text
{
    int x;
    float y;
};
int main()
{
    text t;
    t.y=1.1;
    cout<<t.x;
    return 0;
}