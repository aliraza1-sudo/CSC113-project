#include <iostream>
using namespace std;
int main () {
    char alpha;
    cout << "Enter a character: ";
    cin >> alpha;
    if ( alpha >= 65 && alpha <= 90 ) {
        cout << "Upper-case." << endl;
    }
    if ( alpha >= 97 && alpha <= 122 ) {
        cout << "Lower-case." << endl;
    }
    else {
        cout << "Error: Non-alphabetic." << endl;
    }
    return 0;
}