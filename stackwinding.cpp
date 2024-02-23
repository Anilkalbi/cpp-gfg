// CPP Program to demonstrate Stack Unwinding 
#include <iostream> 
using namespace std; 
void f1() throw(int) 
{ 
	cout << "\n f1() Start "; 
	throw 100; 
	cout << "\n f1() End "; 
} 
void f2() throw(int) 
{ 
	cout << "\n f2() Start "; 
	f1(); 
	cout << "\n f2() End "; 
} 

/* Another sample function f3() that calls f2() and handles 
 exception thrown by f1() */
void f3() 
{ 
	cout << "\n f3() Start "; 
	try { 
		f2(); 
	} 
	catch (int i) { 
		cout << "\n Caught Exception: " << i; 
	} 
	cout << "\n f3() End"; 
} 

// Driver Code 
int main() 
{ 
	f3(); 

	getchar(); 
	return 0; 
}
