#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	cout<<"IN"<<endl;
	if((x-y)!=0)
	{
		int r=z;
		cout<<"value "<<r<<endl;
	}
	else{
		throw(x-y);
	}
}
int main()
{
	try{
		cout<<"we are"<<endl;
		divide(10,10,20);
		divide(10,20,30);
		
	}
	catch(int i)
	{
		cout<<"Exception caught"<<endl;
	}
}
