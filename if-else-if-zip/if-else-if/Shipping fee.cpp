#include<iostream>
using namespace std;
int main()
{
	long int totalparchase;
	cout<<"Enter your total parchase."<<endl;
	cin>>totalparchase;
	if(totalparchase>=10000)
	{
		cout<<"shipping is free"<<endl;
	}
	else if(totalparchase>=5000&&totalparchase<=90000)
	{
		cout<<"shipping is 250 PKR"<<endl;
	}
	else if(totalparchase<5000&&totalparchase>0)
	{
		cout<<"shipping is 500 PKR"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	return 0;
}
