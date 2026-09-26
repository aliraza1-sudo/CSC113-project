#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter temprature in Celcius."<<endl;
	cin>>temp;
	if(temp>=30)
	{
		cout<<"It's HOT!"<<endl;
	}
	else if(temp<0)
	{
		cout<<"It's FREEZING!"<<endl;
	}
	else if(temp>0||temp<30)
	{
		cout<<"WARM"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
	return 0;
}
