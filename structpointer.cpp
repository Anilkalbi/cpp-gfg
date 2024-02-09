#include<iostream>
using namespace std;
struct point
{
    int x;
    int y;
};
int main()
{
    point p={10,20};
    point *ptr=&p;
    cout<<ptr->y<<" ";
    ptr->y=30;
    cout<<p.y;
    return 0;
}