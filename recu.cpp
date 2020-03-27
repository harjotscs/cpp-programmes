#include<iostream>
using namespace std;
int h(int a)
{
	if (a<=1)
	return 1;
	else
	return a+h(a-1);
}
int main()
{
	int a,b;
	cin>>a;
	b=h(a);
	cout<<b;
}
