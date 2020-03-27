//TRY, CATCH,THROW******////*******Exception Handling******\\\\\*******
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"enter no."<<endl;
	cin>>i;
	double f;
	cin>>f;
	
	cout<<"Welcome"<<endl;
	try{
		 if (i==1)
	         	{
			throw 4;
		     }
		
		throw 486;
	
		cout<<"\n statement didn't executed";
	}
	catch(int e)
	{
		cout<<"\nException no."<<e<<endl;
	}
	catch(double e)
	{
		cout<<"\nException double no."<<e<<endl;
	}
	cout<<"\n last Line";
}
