//when we provide input to the given data type
/*#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1(10,20);
    pair<int,string>p2(10,"vscode");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<" "<<p2.second<<endl;
    return 0;
}*/
//when we donot provide input to the given data type
#include<iostream>
using namespace std;
int main()
{
    pair<int,int>p1;
    pair<int,string>p2(10,"vscode");
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<" "<<p2.second<<endl;
    return 0;
}