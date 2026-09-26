#include <iostream>
using namespace std;
int main () {
    int choice;
    cout << "1) USD\n2) PKR\n3) EUR\n4) GBP\nEnter your choice: ";
    cin >> choice;
    switch ( choice ) {
        case 1:
        cout << "Its symbol is: $" << endl;
        break;
        case 2:
        cout << "Its symbol is: ₨" << endl;
        break;
        case 3:
        cout << "Its symbol is: €" << endl;
        break;
        case 4:
        cout << "Its symbol is: £" << endl;
        break;
        default:
        cout << "Error: Invalid choice." << endl;
    }
    return 0;
}