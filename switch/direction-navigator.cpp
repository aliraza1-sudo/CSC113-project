#include <iostream>
using namespace std;
int main () {
    char dir;
    cout << "Enter direction character in upper-case: ";
    cin >> dir;
    switch ( dir ) {
        case 'N':
        cout << "North." << endl;
        break;
        case 'S':
        cout << "South." << endl;
        break;
        case 'E':
        cout << "East." << endl;
        break;
        case 'W':
        cout << "West." << endl;
        break;
        default:
        cout << "Error: Enter valid character." << endl;
    }
    return 0;
}