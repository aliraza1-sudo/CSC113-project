#include <iostream>
using namespace std;
int main () {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if ( age >= 18 ) {
        cout << "Allowed to vote." << endl;
    }
    else {
        cout << "Not allowed." << endl;
    }
    return 0;
}