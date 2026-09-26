#include <iostream>
using namespace std;
int main () {
    int choice;
    cout << "1) English\n2) Urdu\n3) Spanish\n4) French\nEnter your choice: ";
    cin >> choice;
    switch ( choice ) {
        case 1:
        cout << "Hello and welcome!" << endl;
        break;
        case 2:
        cout << "السلام علیکم! خوش آمدید" << endl;
        break;
        case 3:
        cout << "¡Hola y bienvenido!" << endl;
        break;
        case 4:
        cout << "Bonjour et bienvenue !" << endl;
        break;
        default:
        cout << "Error: Invalid choice." << endl;
    }
    return 0;
}