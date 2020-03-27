///rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow////rethrow///
#include<iostream>
using namespace std;
int f(int a)
{
	try{
		
		throw a;
	}
	catch(int e)
	{
		cout<<"\n first Exception no."<<e<<endl;
		throw;
	}
}
int main()
{
try{
	f(6);
}

	catch(int e)
	{
		cout<<"\n second Exception no."<<e<<endl;
		
	}
}
