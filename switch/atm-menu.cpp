#include <iostream>
using namespace std;
int main () {
    int choice;
    cout << "1) Check Balance \n2) Deposit\n3) Withdraw\n4) Exit\nEnter your choice: ";
    cin >> choice;
    switch ( choice ) {
        case 1:
        cout << "Checking balance..." << endl;
        break;
        case 2:
        cout << "Depositing..." << endl;
        break;
        case 3:
        cout << "Withdrawal..." << endl;
        break;
        case 4:
        cout << "Exiting..." << endl;
        break;
        default:
        cout << "Error: Invalid input" << endl;
    }
    return 0;
}