#include <iostream>
using namespace std;
int main () {
    int balance, lmtRem, reqAmnt, dispensed, newBal, lmtLeft;
    
    // Taking inputs
    cout << "Balance: ";
    cin >> balance;
    cout << "Daily limit remaining: ";
    cin >> lmtRem;
    cout << "Requested amount: ";
    cin >> reqAmnt;
    
    // writing condition for requested amount
    if ( !(reqAmnt % 500 == 0) ) {
        cout << "Error: Amount must be a multiple of 500" << endl;
        return 0;
    }

    // writing condition for daily limit check
    if ( reqAmnt > lmtRem ) {
        cout << "Error: Exceeds remaining daily limit" << endl;
        return 0;
    }

    // writing condition for Balance check with minimum-balance rule
    if ( balance - reqAmnt < 1000 ) {
        cout << "Error: Insufficient balance (minimum balance of 1000 required)" << endl;
        return 0;
    }

    // calculating dispensed
    dispensed = reqAmnt;
    cout << "Dispensed: " << dispensed << endl;

    // calculating new balance
    newBal = balance - dispensed;
    cout << "New balance: " << newBal << endl;

    // calculating daily limit left
    lmtLeft = lmtRem - dispensed;
    cout << "Daily limit left: " << lmtLeft << endl;

    // writing condition for low balance notice
    if ( newBal < 5000 ) {
        cout << "Notice: Your balance is running low" << endl;
    }
    return 0;
}