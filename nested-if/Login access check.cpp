#include<iostream>
using namespace std;
int main()
{
	 long int user_name,password;
	cout<<"Enter a 3-digit username."<<endl;
	cin>>user_name;
	if(user_name=014)
	{
		cout<<"Enter a password"<<endl;
    	cin>>password;
		if(password==201214)
		{
			cout<<"Access Granted"<<endl;
		}
		else
		{
			cout<<"wrong Password or username"<<endl;
		}
	}
	else
	{
		cout<<"unknown user"<<endl;
	}
	return 0;
}
