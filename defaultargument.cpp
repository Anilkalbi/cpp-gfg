#include<iostream>
using namespace std;
    void printDetails(int id,string name="NA",string address="NA")
    {
        cout<<"id"<<id<<"\n";
        cout<<"name"<<name<<"\n";
        cout<<"address"<<address<<"\n";
    }
    int main()
    {
        printDetails(101,"sandeep","noida");
        cout<<"\n";
         printDetails(201,"deep","jaipur");
        cout<<"\n";
        printDetails(301);
        return 0;
    }