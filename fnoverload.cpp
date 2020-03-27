#include<iostream>
using namespace std;
h(char a[20],char b[20],char c[20])
{
cout<<a<<"\n";
	cout<<b<<"\n";
	cout<<c<<"\n";	
}
h(int a,int f)
{
	cout<<a<<"\n"<<f;
}
int main()
{
	int i,f;
	char a[20],b[20],c[20];
	cout<<"enter student name\n";
	cin>>a;
	cout<<"enter father's name\n";
	cin>>b;
	cout<<"enter mother name\n";
	cin>>c;
	h(a,b,c);
	cout<<"ENTER AGE\n";
	cin>>i;
	cout<<"ENTER FEE\n";
	cin>>f;
	h(i,f);	
}



