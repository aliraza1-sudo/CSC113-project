#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>=0&&age<=12)
	{
		cout<<"Child"<<endl;
	}
	else if(age<=13&&age>=19)
	{
		cout<<"Teenager,CLOCK IT"<<endl;
	}
	else if(age>=20)
	{
		cout<<"Adult"<<endl;
	}
	else
	{
		cout<<"hello! Alien"<<endl;
	}
	return 0;
}
