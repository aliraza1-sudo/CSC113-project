#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter your grade ('A'-'F')"<<endl;
	cin>> x;
	switch (x)
	{
		  case 'A':
			cout<<"A — Excellent: Outstanding performance with excellent understanding."<<endl;
			break;
			case 'B':
			cout<<"B — Good: Good performance with a strong understanding."<<endl;
			 break;
			case 'C':
			cout<<"C — Average: Satisfactory performance with basic understanding."<<endl;
			break;
			case 'D':
			cout<<"D — Below Average: Limited understanding with some mistakes."<<endl;
			break;
			case 'E':
			cout<<"E — Poor: Weak performance and insufficient understanding."<<endl;
			break;
			case 'F':
			cout<<"F — Fail: Unsatisfactory performance; requirements were not met."<<endl;
			break;
			default:
				cout<<"Invalid"<<endl;
	}
	return 0;
}
