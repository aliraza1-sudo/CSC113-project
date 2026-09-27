#include<iostream>
using namespace std;
int main()
{
	int x, y = 3/2;
	cout<<"Enter a number from (1-7)"<<endl;
	cin>> x;
	switch(x)
	{
		case 1:
			cout<<"Monday"<< y <<endl;
			break;
			case 2:
				cout<<"Tuesday"<<endl;
				break;
				case 3:
					cout<<"Wednessday"<<endl;
					break;
					case 4:
						cout<<"Thursday"<<endl;
						break;
						case 5:
							cout<<"Friday"<<endl;
							break;
							case 6:
								cout<<"Saturday"<<endl;
								break;
								case 7:
									cout<<"Sunday"<<endl;
									break;
									default:
									cout<<"Invalid"<<endl;
	}
	return 0;
}
