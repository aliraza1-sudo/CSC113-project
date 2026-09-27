#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter a light colour ('R','Y','G')"<<endl;
	cin>> x;
	switch(x)
	{
		case 'R':
			cout<<"STOP!"<<endl;
			break;
			case 'Y':
				cout<<"Slow Down"<<endl;
				break;
				case 'G':
					cout<<"Go!"<<endl;
					break;
					default:
						cout<<"invalid"<<endl;
	}
	return 0;
}
