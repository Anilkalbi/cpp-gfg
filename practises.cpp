#include<iostream>
using namespace std;
void func()
{
 static int x=1;
 int y=1;
 x++;
 y++;
 cout<<x<<" "<<y<<endl;
}
int main()
{
    func();
    func();
    func();
    return 0;
}