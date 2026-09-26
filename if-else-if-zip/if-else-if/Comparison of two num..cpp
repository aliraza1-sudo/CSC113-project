#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>b)
	{
		cout<<" "<<a<<"s greater"<<endl;
	}
	else if(b>a)
	{
		cout<<" "<<b<<"is greater"<<endl;
	}
	else if(a==b)
	{
		cout<<" "<<a<<" is equal to"<<" "<<b<<endl;
	}
	else
	{
		cout<<"invalidity darling"<<endl;
	}
	return 0;
}
