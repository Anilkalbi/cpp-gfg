#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    /* Input two numbers from user */
    cout << "Enter two numbers to find the maximum: "<<endl;
    cin >> num1 >> num2;

    /* Expression (num1 > num2) will return either 0 or 1 */
    switch (num1 > num2) {   
        /* If condition (num1 > num2) is false */
        case 0:
            cout << num2 << " is maximum";
            break;

        /* If condition (num1 > num2) is true */
        case 1:
            cout << num1 << " is maximum";
            break;
    }

    return 0;
}
