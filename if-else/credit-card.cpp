#include <iostream>
using namespace std;
int main () {
    int income, score;
    cout << "Enter your annual income: " << endl;
    cin >> income;
    cout << "Enter your credit score: ";
    cin >> score;
    if ( income >= 500000 && score >= 700 ) {
        cout << "Approved." << endl;
    }
    else {
        cout << "Rejected." << endl;
    }
    return 0;
}