#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first side of the triangle"<<endl;
	cin>>a;
	cout<<"Enter second side of the triangle"<<endl;
	cin>>b;
	cout<<"Enter third side of the triangle"<<endl;
	cin>>c;
	if(a==b&&b==c)
	{
		cout<<"it's an equitarial triangle"<<endl;
	}
	else if(a==b&&b!=c)
	{
		cout<<"it's an isosceles triangle"<<endl;
	}
	else
	{
		cout<<"it's a scalene triangle"<<endl;
	}
	return 0;
}

