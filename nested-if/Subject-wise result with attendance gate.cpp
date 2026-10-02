#include<iostream>
using namespace std;
int main()
{
	int sub1,sub2,attendance;
	cout<<"Enter your attendance"<<endl;
	cin>>attendance;
	if(attendance>=75)
	{
		cout<<"Enter your marks in two subjects"<<endl;
		cin>>sub1;
		cin>>sub2;
		if(sub1>=50)
		{
			if(sub2>=50)
			{
				cout<<"pass both"<<endl;
			}
			else
			{
				cout<<"passed one"<<endl;
			}
		}
		else
		{
			cout<<"failed both"<<endl;
		}
	}
	else
	{
		cout<<"detained"<<endl;
	}
	return 0;
}
