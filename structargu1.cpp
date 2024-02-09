#include<iostream>
using namespace std;
struct student
{
    int rollno;
    string name;
    string address;
    int age;
    string section;
};
void print(student &x)
{
cout<<x.rollno<<" "<<x.name<<" "<<x.address<<" "<<x.section<<" ";
}
int main()
{
    student();
}