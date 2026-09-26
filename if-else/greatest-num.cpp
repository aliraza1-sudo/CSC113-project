#include <iostream>
using namespace std;
int main () {
    int x, y;
    cout << "Enter 1st number: ";
    cin >> x;
    cout << "Enter 2nd number: ";
    cin >> y;
    if ( x > y ) {
        cout << x << " is greater." << endl;
    }
    else {
        cout << y << " is greater." << endl;
    }
    return 0;
}