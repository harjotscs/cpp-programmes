#include<iostream>
using namespace std;
int main()
{
	int a,*p,**t;
	cin>>a;
	p=&a;
	cout<<*p<<endl;
	*p=a;
	cout<<*p<<endl;
	t=&p;
	cout<<**t;
	
}
