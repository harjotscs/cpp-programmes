#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	try{
		if(a>1)
		{
			throw(a);
		}
	}
	catch(int f)
	{
		cout<<"exception F="<<f<<endl;
	}
}
