#include <iostream>
using namespace std;

int main()
{
    float percentage;

    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage >= 90)
    {
        cout << "Admission Category: Scholarship Category" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Admission Category: Merit Category" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Admission Category: General Merit" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Admission Category: Regular Admission" << endl;
    }
    else if (percentage >= 50)
    {
        cout << "Admission Category: Conditional Admission" << endl;
    }
    else
    {
        cout << "Admission Category: Not Eligible" << endl;
    }

    cout << "Your Percentage: " << percentage << "%" << endl;

    return 0;
}
