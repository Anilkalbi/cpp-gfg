#include<iostream>
using namespace std;
union text
{
  char x;
  int y;
  double z;
  //int arr[4];
};
int main()
{
    cout<<sizeof(text);
    return 0;
}