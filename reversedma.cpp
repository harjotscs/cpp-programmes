//wap reverse also dealloacate when not in use
#include<iostream>
using namespace std;
int main()
{
	int *a,*b,*c;
	a=new int;
	b=new int;
	c=new int(0);
	cin>>*a;
	while(*a>0)
	{
		*b=*a%10;
	*a=*a/10;
	*c=*c*10+*b;
		
	}
	cout<<*c;
	delete a;
	delete b;
	delete c;
}
