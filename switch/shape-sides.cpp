#include <iostream>
using namespace std;
int main () { 
    int choice;
    cout << "1) Triangle\n2) Square\n3) Pentagon\n4) Hexagon\nEnter your choice: ";
    cin >> choice;
    switch( choice ) {
        case 1:
        cout << "Triangle has 3 sides." << endl;
        break;
        case 2:
        cout << "Square has 4 sides." << endl;
        break;
        case 3:
        cout << "Pentagon has 5 sides." << endl;
        break;
        case 4:
        cout << "Hexagon has 6 sides." << endl;
        break;
        default:
        cout << "Error: Invalid choice." << endl;
    }
    return 0;
}