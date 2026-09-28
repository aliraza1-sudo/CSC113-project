#include <iostream>
using namespace std;
int main() {
    // declaration
    int age, card;

    // getting inputs
    cout << "Enter your age: ";
    cin >> age;
    cout << "1. You have member card\n2. You did not have member card\nEnter your choice: ";
    cin >> card;

    // calculations
    if ( age >= 60 ) {
        if ( card == 1 ) {
            cout << "You get 5% discount." << endl;
        }
        else {
            cout << "You did not get any discount." << endl;
        }
    }
    return 0;
}