#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int x,int y)
    {
        this->x=x;
        this->y=y;    
    }
    point print(int x,int y)
    {
        cout<<x<<endl<<y;
    }
};
int main()
{
   point p1(10,20);
   point p2(5,5);
   return 0;
}