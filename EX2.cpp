#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
    string address;
};
int main()
{
    student s={101,"ABC","XYZ"};
    cout<<s.rollno<<endl<<s.name<<endl<<s.address;
    return 0;
}