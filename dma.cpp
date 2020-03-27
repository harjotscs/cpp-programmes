// no. is even or odd in dma??
#include<iostream>
using namespace std;
int main()
{
	int *a;
	a=new int(2);
	cin>>*a;
	if(*a%2==0)
	{
		cout<<"Even\n";
	}
	else {
		cout<<"Odd\n";
	}
	cout<<*a<<endl;
	delete a;
	cout<<*a<<endl;
	a=NULL;
	cout<<*a<<endl;
	fflush(stdin);
}
