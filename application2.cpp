#include<iostream>
using namespace std;
union text
{
    int x;
    char bin[4];
};
int main()
{
    text t;
    t.x=512;
    cout<<(int)t.bin[0]<<" "<<(int)t.bin[1]<<" "<<(int)t.bin[3]<<" "<<(int)t.bin[4];
    return 0;
}