#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,4,-1,8,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}