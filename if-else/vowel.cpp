#include <iostream>
using namespace std;
int main () {
    char alpha;
    cout << "Enter a single character: ";
    cin >> alpha;
    if ( alpha == 65 || alpha == 69 || alpha == 73 || alpha == 79 || alpha == 85 || alpha == 97 || alpha == 101 || alpha == 105 || alpha == 111 || alpha == 117 ) {
        cout << alpha << " is vowel." << endl;
    }
    else {
        cout << alpha << " is consonant." << endl;
    }
    return 0;
}