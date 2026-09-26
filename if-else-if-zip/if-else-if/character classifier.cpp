#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter any key"<<endl;
	cin>>x;
	if(x<='A'&&x>='Z')
	{
		cout<<"Upper-case"<<endl;
	}
	else if(x>='a'&&x<='z')
	{
		cout<<"Lower-case"<<endl;
	}
	else if(x>='0'&&x<='9')
	{
		cout<<"Digit"<<endl;
	}
	else
	{
		cout<<"special character"<<endl;
	}
	return 0;
}
