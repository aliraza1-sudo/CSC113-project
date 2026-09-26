#include<iostream>
using namespace std;
int main()
{
	long int accountbalance,withdrawl;
	cout<<"Enter your account balance."<<endl;
	cin>>accountbalance;
	cout<<"Enter a withdrawl ammount"<<endl;
	cin>>withdrawl;
	if(withdrawl>accountbalance)
	{
		cout<<"Insufficient Balance"<<endl;
	}
	else if(withdrawl>=50000&&accountbalance>=50000)
	{
		cout<<"Daily limit exceed"<<endl;
	}
	else if(withdrawl>0&&withdrawl<accountbalance)
	{
		accountbalance=accountbalance-withdrawl;
		cout<<"you withdraw"<<" "<<withdrawl<<endl;
		cout<<"your remaining balance is"<<" "<<accountbalance<<endl;
	}
return 0;
}
