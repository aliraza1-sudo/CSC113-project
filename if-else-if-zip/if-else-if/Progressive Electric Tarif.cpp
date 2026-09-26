#include<iostream>
using namespace std;
int main()
{
	//declaring variables when needed instead og in the starting
	long int units_consumed;
	cout<<"Enter your consumed units"<<endl;
	cin>>units_consumed;
	//declaring variable "bill"
	long int bill;
	if(units_consumed<0)
	{
		cout<<"invalid"<<endl;
		return 0;
	}
	if(units_consumed<=100)
	{
		bill=units_consumed*15;
	}
	else if(units_consumed<=200)
	{
		bill=(100*15)+((units_consumed-100)*22);
	}
	else if(units_consumed<=300)
	{
		bill=(100*15)+(100*22)+((units_consumed-200)*30);
	}
	else 
	{
		bill=(100*15)+(100*22)+(100*30)+((units_consumed-300)*40);
	}
	// declaring variable surcharge
	long int surcharge;
	if(bill>=10000)
	{
		surcharge=bill*0.15;
	}
	// declaring variable grandtotal
	long int grand_total;
	{
		grand_total=bill+surcharge;
	}
	// printing everything
	{
		cout<<"Base amount is"<<""<<bill<<endl;
		cout<<"Surcharge is (15%)"<<""<<surcharge<<endl;
		cout<<"Grand total is"<<""<<grand_total<<endl;
	}
	return 0;
}
