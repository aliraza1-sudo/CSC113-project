#include<iostream>
using namespace std;
int main()
{
	int withdrawl;
	cout<<"Enter the ammount you want to withdraw"<<endl;
	cin>>withdrawl;
	if(withdrawl<500)
	{
		cout<<"you cannot withdraw this ammount, enter a higher ammount"<<endl;
	}
	return 0;
}
