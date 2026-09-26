#include <iostream>
using namespace std;
int main () {
    char alpha;
    cout << "Enter a character: ";
    cin >> alpha;
    if ( alpha >= 65 && alpha <= 90 || alpha >= 97 && alpha <= 122 ) {
        cout << "Alphabet." << endl;
    }
    else {
        cout << "Non-alphabet." << endl;
    }
    return 0;
}