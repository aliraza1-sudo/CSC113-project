#include<iostream>
using namespace std;
int main()
{
	int a,b,result;
	char x;
	cout<<"Enter two numbers"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Choose an operation(+,-,/,*)"<<endl;
	cin>> x;
	switch (x)
	{
		case '+':
			result=a+b;
		    	cout<<"1st num + 2nd num="<<result<<endl;
		        	break;
		        	case '-':
		        		result=a-b;
		        		cout<<"1st num - 2nd num="<<result<<endl;
		        		break;
		        		case '/':
		        			result=a/b;
		        			cout<<"1st num / 2nd num="<<result<<endl;
		        			break;
		        			case '*':
		        				result=a*b;
		        				cout<<"1st num * 2nd num="<<result<<endl;
		        				break;
		        				default:
		        					cout<<"invalid"<<endl;
   }
   return 0;
}
