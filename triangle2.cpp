#include <iostream>
using namespace std;

int main() {
    int i, j, N;

    cout << "Enter N: "<<endl;
    cin >> N;

    for (i = 1; i <= N; i++) {
        // Logic to print spaces
        for (j = i; j < N; j++) {
            cout << " ";
        }

        // Logic to print numbers
        for (j = 1; j <= i; j++) {
            cout << i;
        }

        cout << "\n";
    }

    return 0;
}
