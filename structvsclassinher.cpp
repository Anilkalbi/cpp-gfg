//class inheritance

/*#include<iostream>
using namespace std;
class base
{ 
    public:
    int x;
};
class derived : public base{};
int main()
{
    derived d;
    d.x=20;
    cout<<d.x;
    return 0;
}
*/

//structure inheritance
#include<iostream>
using namespace std;
class base
{ 
    public:
    int x;
};
class derived : public base{};
int main()
{
    derived d;
    d.x=20;
    cout<<d.x;
    return 0;
}