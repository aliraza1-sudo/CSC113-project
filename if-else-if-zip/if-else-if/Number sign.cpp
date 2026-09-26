#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number:"<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<"You Entered a Possitive number."<<endl;
	}
	else if(num<0)
	{
		cout<<"You entered a Negative number."<<endl;
	}
	else if(num=0)
	{
		cout<<"You entered zero"<<endl;
    }
    else
    {
    	cout<<"invalid"<<endl;
	}
	return 0;
}
