#include<iostream>
using namespace std;
int main()
{
	char g;
	cout<<"ENTER THE GRADE YOU GOT IN UPPERCASE\n";
	cin>>g;
	switch(g)
	{
		case 'A': {
			cout<<"EXCELLENT"<<endl;
			break;
		}
		case 'B':{
			cout<<"VERY GOOD";
			break;
		}
		case 'C' :{
			cout<<"GOOD";
			break;
		}
		case 'D' :{
			cout<<"FAILED, TRY AGAIN NEXT YEAR OR GO FOR RE-EVALUATION";
			break;
		}
		default: cout<<"INVALID GRADE";
	}
}
