
#include <iostream>
using namespace std;

int main()
{
    int age, day, time, seatsRequested, seatsRemaining=40;
    int basePrice = 500;
    double price = 500, totalPrice;

    cout << "Enter Customer Age: ";
    cin >> age;

    cout << "Enter Day:\n1-Weekday\n2-Weekend" << endl;
    cin >> day;

    cout << "Enter Time:\n1-Morning\n2-Afternoon\n3-Evening" << endl;
    cin >> time;

    cout << "Enter Seats Requested: ";
    cin >> seatsRequested;

    if (seatsRequested <= seatsRemaining)
    {
        if (age < 12)
        {
            price = basePrice * 0.50;

            if (day == 1)
            {
                if (time == 1)
                {
                    price = price * 0.90;
                }
            }
        }
        else
        {
            if (age >= 60)
            {
                price = basePrice * 0.70;

                if (day == 1)
                {
                    if (time == 1)
                    {
                        price = price * 0.90;
                    }
                }
            }
            else
            {
                price = basePrice;

                if (day == 1)
                {
                    if (time == 1)
                    {
                        price = price * 0.90;
                    }
                }
            }
        }

        if (day == 2)
        {
            if (time == 3)
            {
                price = price * 1.15;
            }
        }

        totalPrice = price * seatsRequested;

        cout << "\nBase Price: " << basePrice << " PKR" << endl;
        cout << "Final Price Per Ticket: " << price << " PKR" << endl;
        cout << "Total Price: " << totalPrice << " PKR" << endl;

        cout << "Booking Confirmed - " << seatsRequested
             << " seat(s) reserved." << endl;
             seatsRemaining=seatsRemaining-seatsRequested;
        cout<<"Remaining seat(s)"<<seatsRemaining<<endl;     
    }
    else
    {
        cout << "Booking Failed: Not enough seats remaining." << endl;
    }

    return 0;
}
