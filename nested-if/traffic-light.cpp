#include <iostream>
using namespace std;
int main() {
    char color;
    bool button;
    
    // taking inputs
    cout << "Enter light colour (R/Y/G): ";
    cin >> color;
    cout << "Whether a pedestrian button was pressed (0,1 / false,true): ";
    cin >> button;

    // applying conditions
    if ( color == 'G' || color == 'g' ) {
        if ( button ) {
            cout << "Prepare to stop." << endl;
        }
        else {
            cout << "Go" << endl;
        }
    }
    return 0;
}