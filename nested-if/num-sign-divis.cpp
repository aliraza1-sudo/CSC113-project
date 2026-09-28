#include <iostream>
using namespace std;
int main() {
    // declaration
    int num;

    // getting inputs
    cout << "Enter a number: ";
    cin >> num;

    // conditions
    if ( num < 0 ) {
        if ( num % 3 == 0 ) {
            cout << num << " is negative multiple of 3" << endl;
        }
        else {
            cout << num << " is not negative multiple of 3" << endl;
        }
    }
    else {
        cout << num << " is positive number" << endl;
    }
    return 0;
}