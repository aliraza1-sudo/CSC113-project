#include<iostream>
using namespace std;
int main()
{
	int purchase;
	cout<<"enter your puchase ammount"<<endl;
	cin>>purchase;
	if(purchase>3000)
	{
		int delivery=0;
		cout<<"you got free delivery"<<endl;
	}
	else
	{
		int delivery=200;
		cout<<"You have to pay 200 delivery charges"<<endl;
	}
	return 0;
}
