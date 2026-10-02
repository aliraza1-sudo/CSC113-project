#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(num<=100)
	{
		if(num%2==0)
		{
			cout<<"Even in Range"<<endl;
		}
		else
		{
			cout<<"Odd in Range"<<endl;
		}
	}
	else
	{
		cout<<"Not in Range"<<endl;
	}
	return 0;
}
