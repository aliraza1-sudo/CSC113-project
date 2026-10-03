#include<iostream>
using namespace std;
int main()
{
	int units;
	cout<<"Enter your consumed units"<<endl;
	cin>>units;
	if(units>500)
	{
		cout<<"Reduce your electricity consumption or you'll be charged extra per unit"<<endl;
	}
	return 0;
}
