#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "Enter 1st side length: ";
    cin >> a;
    cout << "Enter 2nd side length: ";
    cin >> b;
    cout << "Enter 3rd side length: ";
    cin >> c;
    if ( a + b > c && b + c > a && a + c > b ) {
        cout << "Valid triangle." << endl;
    }
    else {
        cout << "Invalid triangle." << endl;
    }
    return 0;
}