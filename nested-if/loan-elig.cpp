#include <iostream>
using namespace std;
int main () {
    // declaration
    int income, credit, loans;

    // getting input
    cout << "Enter your monthly income: ";
    cin >> income;
    cout << "Enter your credits score: ";
    cin >> credit;
    cout << "Enter your number of existing loans: ";
    cin >> loans;

    //applying conditions
    if ( income > 50000 ) {
        if ( credit >= 60 ) {
            if ( loans < 3 ) {
                cout << "Applicant is eligible for the loan." << endl;
            }
            else {
                cout << "Loan is rejected due to too many existing loans." << endl;
            }
        }
        else {
            cout << "Loan is rejected due to a low credit score." << endl;
        }
    }
    else {
        cout << "Loan is rejected due to insufficient income." << endl;
    }
    return 0;
}