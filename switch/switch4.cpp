#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Enter the month number"<<endl;
	cin>>x;
	switch(x)
	{
		case 1:
		cout<<"january-Winter"<<endl;
		break;
		case 2:
			cout<<"february-Winter"<<endl;
			break;
			case 3:
				cout<<"March-Spring"<<endl;
				break;
				case 4:
					cout<<"April-Spring"<<endl;
					break;
					case 5:
						cout<<"May-Spring/Early Summer"<<endl;
						break;
						case 6:
							cout<<"June-Summer"<<endl;
							break;
							case 7:
								cout<<"July-Summer/Moonsoon"<<endl;
								break;
								case 8:
									cout<<"August-Summer/Moonsoon"<<endl;
									break;
									case 9:
										cout<<"September-Autmun"<<endl;
										break;
										case 10:
											cout<<"Octuber-Autmn"<<endl;
											break;
											case 11:
												cout<<"November-Autmn/Early Winter"<<endl;
												break;
												case 12:
													cout<<"December-Winter"<<endl;
													break;
													default:
														cout<<"invalid input"<<endl;
	}
	return 0;
}
