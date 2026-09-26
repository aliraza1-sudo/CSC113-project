#include<iostream>
using namespace std;
int main()
{
	long int annualsalary;
	int tax;
	cout<<"Enter your Annul salary"<<endl;
	cin>>annualsalary;
	int taxB=0.05*(annualsalary-600000);
	int taxC=0.125*(annualsalary-1200000);
	if(annualsalary<=600000)
	{
		tax=0;
		cout<<"your tax is"<<""<<tax<<endl;
	}
	else if(annualsalary>600000&&annualsalary<=1200000)
	{
		tax=taxB;
		cout<<"your tax is"<<""<<tax<<endl;
	}
	else if(annualsalary>1200000)
	{
		tax=taxC+30000;
		cout<<"your tax is"<<""<<tax<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	return 0;
}
