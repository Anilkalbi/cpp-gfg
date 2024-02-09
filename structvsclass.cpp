// class example

/*#include<iostream>
using namespace std;
class point
{
    public:
    //in class all the member are private by default 
int x;
int y;
};
int main()
{
    point p;
    p.x=10;
    cout<<p.x;
    return 0;
}*/

//struct example
#include<iostream>
using namespace std;
struct point
{
    //in struct all the member are public by default 
int x;
int y;
};
int main()
{
    point p;
    p.x=10;
    cout<<p.x;
    return 0;
}