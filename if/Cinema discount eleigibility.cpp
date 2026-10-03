#include<iostream>
using namespace std;
int main()
{
	int age,discount;
	int original_price=500;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>=60)
	{
		discount=original_price*0.2;
		original_price=original_price-discount;
		cout<<"you have to pay"<<""<<original_price<<"after discount"<<endl;
	}
	return 0;
}
