#include<iostream>
using namespace std;
int main()
{
	char g;
	int a,b;
	cout<<"ENTER THE OPERATOR\n";
	cin>>g;
	cout<<"ENTER THE NO.\n";
	cin>>a>>b;
	switch(g)
	{
		case '+': {
			cout<<a+b<<endl;
			break;
		}
		case '-':{
			cout<<a-b;
			break;
		}
		case '*' :{
			cout<<a*b;
			break;
		}
		case '/' :{
			cout<<a/b;
			break;
		}
		default: cout<<"INVALID GRADE";
	}
}
