#include<iostream>
using namespace std;
int main()
{
	int withdrawl,balance;
	cout<<"Enter your account balance"<<endl;
	cin>>balance;
	cout<<"Enter your withdrawl ammount"<<endl;
	cin>>withdrawl;
	if(withdrawl<=balance)
	{
		int remaining;
		remaining=balance-withdrawl;
		cout<<"your remaining balance is:"<<remaining<<endl;
	}
	else
	{
		cout<<"Insufficient balance"<<endl;
	}
	return 0;
}
