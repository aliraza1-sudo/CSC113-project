#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"1-low"<<endl;
	cout<<"2-medium"<<endl;
	cout<<"3-high"<<endl;
	cout<<"Enter a choice from above"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"the surge apply is 0%"<<endl;
	}
	else if(choice==2)
	{
		cout<<"the surge apply is 20%"<<endl;
	}
	else if(choice==3)
	{
		cout<<"the surge apply is 50%"<<endl;
	}
	else
	{
		cout<<"invalid,do you have some issues in reading"<<endl;
	}
	return 0;
}
