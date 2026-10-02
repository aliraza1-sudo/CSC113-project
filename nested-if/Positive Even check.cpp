#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(num>0)
	{
		if(num%2==0)
		{
			cout<<"Positive and even"<<endl;
		}
		else
		{
			cout<<"Positive but not even"<<endl;
		}
	}
	else
	{
		cout<<"Negative"<<endl;
	}
	return 0;
}
