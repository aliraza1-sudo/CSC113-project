#include <iostream>
using namespace std;
int main () {
    float num;
    cout << "Enter floating-point number: ";
    cin >> num;
    if ( num > 0 ) {
        cout << "Non-negative." << endl;
    }
    else {
        cout << "Negative." << endl;
    }
    return 0;
}