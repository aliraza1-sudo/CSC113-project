#include <iostream>
using namespace std;
int main() {
    // storing atm pin
    int str_pin = 1234;

    // declaration
    int enter_pin, balance;
    
    // calculations
    cout << "Enter your PIN: ";
    cin >> enter_pin;
    if ( str_pin == enter_pin ) {
        cout << "Enter your balance: ";
        cin >> balance;
        if ( balance > 0 ) {
            cout << "Ready for withdrawal." << endl;
        }
        else {
            cout << "Zero balance." << endl;
        }
    }
    else {
        cout << "Access Denied." << endl;
    }
    return 0;
}