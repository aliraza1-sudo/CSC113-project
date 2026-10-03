#include<iostream>
using namespace std;
int main()
{
	int salary,bonus;
	cout<<"Enter your salary"<<endl;
	cin>>salary;
	if(salary<50000)
	{
		salary=salary*1.10;
		// the 1.10 is the 10% of 100 which is the bonus
		cout<<"your salary after bonus is:"<<salary<<endl;
	}
	else
	{
		cout<<"you got no bonus"<<endl;
	}
	return 0;
}
