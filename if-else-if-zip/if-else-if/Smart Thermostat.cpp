#include<iostream>
using namespace std;
int main()
{
	int currenttemprature,targettemprature;
	int ltemprature,htemprature;
	// ltemprature represents temprature two degree lessthan target temprature
	// htemprature represents temprature two degree higherthan target temprature
	cout<<"Enter current temprature"<<endl;
	cin>>currenttemprature;
	cout<<"Enter target temprature"<<endl;
	cin>>targettemprature;
	htemprature=targettemprature+2;
	ltemprature=targettemprature-2;
	if(currenttemprature>htemprature)
	{
		cout<<"Cooling System"<<endl;
	}
	else if(currenttemprature<ltemprature)
	{
		cout<<"Heating System"<<endl;
	}
	else if(currenttemprature>ltemprature&&currenttemprature<htemprature)
	{
		cout<<"Fan Only"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	return 0;
}
