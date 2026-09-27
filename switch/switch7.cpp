#include<iostream>
using namespace std;
int main ()
{
	cout<<"1-Check Balance"<<endl;
	cout<<"2-Deposit"<<endl;
	cout<<"3-Withdraw"<<endl;
	cout<<"4-Exit"<<endl;
	int x;
	cout<<"Enter a choice from above(1-4)"<<endl;
	cin>> x;
	switch (x)
	{
		case 1:
			cout<<"Check Balance"<<endl;
			break;
			case 2:
				cout<<"Deposit"<<endl;
				break;
				case 3:
					cout<<"Withdraw"<<endl;
					break;
					case 4:
						return 0;
						break;
						default:
							cout<<"invalid"<<endl;
	}
	
}
