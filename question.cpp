//create a class student with roll no. and name for 5 student
#include<iostream>
#include<string.h>
using namespace std;
class student{
	private: int r;
	char c[40];
	public:
		student()
		{
		}
	student(int g,char h[40]) 
	{
		r=g;
		strcpy(h,c);
	}  
	void o()
	{
		cout<<r<<endl<<c<<endl;
	}
}a[5];
int main()
{
	int i,r;
	char n[40];
	for(i=0;i<5;i++)
	{
		cin>>r>>n;
		student a[i](r,n);
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		a[i].o();
		cout<<endl;
	}
	
}
