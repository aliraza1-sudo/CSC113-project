#include <iostream>
using namespace std;

int main()
{
    int tickets;
    int price;
    int total;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    if (tickets <= 2)
    {
        price = 1000;
    }
    else if (tickets <= 5)
    {
        price = 900;
    }
    else if (tickets <= 10)
    {
        price = 800;
    }
    else if (tickets <= 20)
    {
        price = 700;
    }
    else
    {
        price = 600;
    }

    total = tickets * price;

    cout << "Price per ticket: Rs. " << price << endl;
    cout << "Total bill: Rs. " << total << endl;

    return 0;
}
