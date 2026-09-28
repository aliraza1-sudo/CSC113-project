#include <iostream>
using namespace std;
int main() {
    // declaration
    int years;
    char rate;

    // getting inputs
    cout << "Enter your years of service: ";
    cin >> years;
    cout << "Enter your performance rating: ";
    cin >> rate;

    // conditions
    if ( years > 5 ) {
        if ( rate == 65 || rate == 97 ) {
            cout << "You are rewarded with a $1000 bonus." << endl;
        }
        else {
            cout << "You are rewarded with a $500 bonus." << endl;
        }
    }
    else {
        cout << "No bonus rewarded." << endl;
    }
    return 0 ;
}