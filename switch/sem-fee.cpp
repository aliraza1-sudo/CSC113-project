#include <iostream>
using namespace std;
int main() {
    
    // taking inputs from the user
    int program, credits,reg,subtotal, mode, lab, hostel, scholarShip, payment, afterScholarShip, cardAdj, tuition;
    float grandTotal, percent, discount, cardDiscount;
    cout << "1) CS\n2) SE\n3) AI\n4) Cyber-security\nEnter your program choice respectively: ";
    cin >> program;
    cout << "1) 12\n2) 15\n3) 18\n4) 21\nEnter your credits choice respectively: ";
    cin >> credits;
    cout << "1) Regular\n2) Evening\nEnter your mode choice respectively: ";
    cin >> mode;
    cout << "1) None\n2) Standard\n3) Advanced\nEnter your lab package choice respectively: ";
    cin >> lab;
    cout << "1) No hostel\n2) Shared\n3) Single\nEnter your type of hostel respectively: ";
    cin >> hostel;
    cout << "1) None\n2) Merit\n3) Need-based\nEnter your type of scholarship choice respectively: ";
    cin >> scholarShip;
    cout << "1) Cash\n2) Bank transfer\n3) Card\n4) Mobile wallet\nEnter you payment method choice respectively: ";
    cin >> payment;
    
    // converting choices of credits into their acutal value
    if ( credits == 1 ) {
        credits = 12;
    }
    else if ( credits == 2 ) {
        credits = 15;
    }
    else if ( credits == 3 ) {
        credits = 18;
    }
    else if ( credits == 4 ) {
        credits = 21;
    }
    else {
        cout << "Error: Invalid credits." << endl;
    }

    // Calculating tuition fee and evening adjustment for regular mode
    if ( mode == 1 ) { 
        switch ( program ) {
            // int tuition;
            case 1:
            tuition = 5500*credits;
            cout << "Tuition = " << tuition << endl;
            break;
            case 2:
            tuition = 5000*credits;
            cout << "Tuition = " << tuition << endl;
            break;
            case 3:
            tuition = 6000*credits;
            cout << "Tuition = " << tuition << endl;
            break;
            case 4:
            tuition = 4800*credits;
            cout << "Tuition = " << tuition << endl;
            break;
            default:
            cout << "Error: Invalid choice for program selection." << endl;
        }
    }

    // Calculating tuition fee and evening adjustment for evening mode
    else if ( mode == 2 ) { 
        switch ( program ) {
            case 1:
            tuition = (5500*credits);
            percent = (8.0/100.0)*tuition;
            cout << "Tuition: " << tuition << "\tEvening adjustment: " << percent << endl;
            break;
            case 2:
            tuition = (5000*credits);
            percent = (8.0/100.0)*tuition;
            cout << "Tuition: " << tuition << "\tEvening adjustment: " << percent << endl;
            break;
            case 3:
            tuition = (6000*credits);
            percent = (8.0/100.0)*tuition;
            cout << "Tuition: " << tuition << "\tEvening adjustment: " << percent << endl;
            break;
            case 4:
            tuition = (4800*credits);
            percent = (8.0/100.0)*tuition;
            cout << "Tuition: " << tuition << "\tEvening adjustment: " << percent << endl;
            break;
            default:
            cout << "Error: Invalid choice for program selection." << endl;
        }
    }
    else{
        cout << "Error: Invalid choice of mode selection." << endl;
    }
    
    // adding registration which is fixed
    reg = 8000;
    cout << "Registration: " << reg;
    
    // conversion of lab into their acutal values
    switch ( lab ) {
        case 1:
        lab = 0;
        cout << "\tLab: " << lab;
        break;
        case 2:
        lab = 6000;
        cout << "\tLab: " << lab;
        break;
        case 3:
        lab = 12000;
        cout << "\tLab: " << lab;
        break;
        default:
        cout << "Error: Invalid choice for lab selection." << endl;
        return 0;
    }

    // conversion of hostel into their acutal value
    switch ( hostel) {
        case 1:
        hostel = 0;
        cout << "\tHostel: " << hostel << endl;
        break;
        case 2:
        hostel = 18000;
        cout << "\tHostel: " << hostel << endl;
        break;
        case 3:
        hostel = 30000;
        cout << "\tHostel: " << hostel << endl;
        break;
        default:
        cout << "Error: Invalid choice for hostel selection." << endl;
        return 0;
    }

    // finally calculating subtotal
    subtotal = tuition + percent + reg + lab + hostel;
    cout << "Subtotal: " << subtotal;

    // calculating merit discount and after scholar ship
    switch ( scholarShip ) {
        case 1:
        discount = (0.0/100.0)*subtotal;
        afterScholarShip = subtotal - discount;
        cout << "\tMerit discount: " << discount << endl << "After scholarship: " << afterScholarShip;
        break;
        case 2:
        discount = (10.0/100.0)*subtotal;
        afterScholarShip = subtotal - discount;
        cout << "\tMerit discount: " << discount << endl << "After scholarship: " << afterScholarShip;
        break;
        case 3:
        discount = (15.0/100.0)*subtotal;
        afterScholarShip = subtotal - discount;
        cout << "\tMerit discount: " << discount << endl << "After scholarship: " << afterScholarShip;
        break;
        default:
        cout << "Error: Invalid choice of scholar ship." << endl;
        return 0;
    }

    // calculating card adjustment
    switch ( payment ) {
        case 1:
        cardDiscount = (0.0/100.0)*afterScholarShip;
        cardAdj = cardDiscount;
        cout << "\tCard adjustment: " << cardAdj << endl;
        break;
        case 2:
        cardDiscount = (0.0/100.0)*afterScholarShip;
        cardAdj = cardDiscount;
        cout << "\tCard adjustment: " << cardAdj << endl;
        break;
        case 3:
        cardDiscount = (2.0/100.0)*afterScholarShip;
        cardAdj = cardDiscount;
        cout << "\tCard adjustment: " << cardAdj << endl;
        break;
        case 4:
        cardDiscount = (-1.0/100.0)*afterScholarShip;
        cardAdj = cardDiscount;
        cout << "\tCard adjustment: " << cardAdj << endl;
        break;
        default:
        cout << "Error: Invalid choice for card selection." << endl;
        return 0;
    }

    // calculating grand total
    grandTotal = afterScholarShip + cardAdj;
    cout << "Grand Total: " << grandTotal << endl;


    return 0;
}