#include <iostream>
using namespace std;
int main () {
    int pass = 12345, pin;
    cout << "Enter PIN: ";
    cin >> pin;
    if ( pass == pin ) {
        cout << "Access Granted." << endl;
    }
    else {
        cout << "Access Denied." << endl;
    }
    return 0;
}