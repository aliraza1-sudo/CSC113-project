#include <iostream>
using namespace std;
int main () {
    int stock;
    cout << "Enter current item stock level: ";
    cin >> stock;
    if ( stock > 0 ) {
        cout << "In stock." << endl;
    }
    else {
        cout << "Out of stock." << endl;
    }
    return 0;
}