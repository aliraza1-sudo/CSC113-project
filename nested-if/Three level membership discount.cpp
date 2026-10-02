#include<iostream>
using namespace std;
int main()
{
	int choice,total_paycheck;
	cout<<"Choose a membership:"<<endl;
	cout<<"1-Silver\n2-Gold\n3-Plantinium"<<endl;
	cin>>choice;
	if(choice==1)
	{
		int purchase;
		cout<<"Enter your purchase ammount"<<endl;
		cin>>purchase;
		if(purchase>=30000)
		{
			total_paycheck=purchase*0.3;
			cout<<"your total paycheck is"<<""<<total_paycheck<<endl;
		}
		else
		{
			cout<<"sorry"<<endl;
		}
	}
	else if(choice==2)
	{
			int purchase;
			cout<<"Enter your purchase ammount"<<endl;
			cin>>purchase;
		if(purchase>=50000)
		{
			total_paycheck=purchase*0.5;
			cout<<"your total paycheck is"<<""<<total_paycheck<<endl;
		}
		else
		{
			cout<<"insufficiant balance"<<endl;
		}
	}
	else
	{
	int purchase;
		cout<<"Enter your purchase ammount"<<endl;
		cin>>purchase;
		if(purchase>=70000)
		{
			total_paycheck=purchase*0.7;
			cout<<"your total paycheck is"<<""<<total_paycheck<<endl;
		}
		else
		{
			cout<<"insufficiant balance"<<endl;
		}	
	}
	return 0;
}
