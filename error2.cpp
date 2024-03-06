#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
void main()
{
    int n = 9, div = 0;
   
    // wrong logic
    // number is divided by 0,
    // so this program abnormally terminates
    div = n/0;
     
   cout << "result = "<< div;
}
 