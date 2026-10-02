#include<iostream>
using namespace std;
int main()
{
	int marks, attendance;
	cout<<"Enter your marks"<<endl;
	cin>>marks;
	if(marks>=50)
	{
		cout<<"Enter your attendace"<<endl;
		cin>>attendance;
		if(attendance>=75)
		{
			cout<<"pass"<<endl;
		}
		else
		{
			cout<<"not enough attendance"<<endl;
		}
	}
	else
	{
		cout<<"Detained"<<endl;
	}
	return 0;
}
