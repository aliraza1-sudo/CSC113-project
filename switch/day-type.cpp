#include <iostream>
using namespace std;
int main () {
    int day;
    cout << "Enter day number: ";
    cin >> day;
    switch ( day ) {
        case 1:
        cout << "Weekday" << endl;
        break;
        case 2:
        cout << "Weekday" << endl;
        break;
        case 3:
        cout << "Weekday" << endl;
        break;
        case 4:
        cout << "Weekday" << endl;
        break;
        case 5:
        cout << "Weekday" << endl;
        break;
        case 6:
        cout << "Weekend" << endl;
        break;
        case 7:
        cout << "Weekend" << endl;
        break;
        default:
        cout << "Error: Enter valid day number." << endl;
    }
    return 0;
}
