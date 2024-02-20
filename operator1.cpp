#include<iostream>
using namespace std;
class complex
{
  private:
  int real,imag;
  public:
  complex(int r=0,int i=0)
  {
    real=r;
    imag=i;
  }//const& stand for passing by reference 
  complex operator+(complex const& obj)
  {
    complex res;
    res.real=real+obj.real;
    res.imag=imag+obj.imag;
    return res;
  }
  void print()
  {
    cout<<real<<"+i"<<imag<<"/n";
  }
};
int main()
{
    complex c1(10,5),c2(2,4);
    complex c3=c1+c2;
    c3.print();
}