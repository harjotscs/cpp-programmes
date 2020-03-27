#include <iostream> 
using namespace std; 
class Test { 
public: 
int a,b;
Test() { cout << "Constructor of Test " << endl; } 
~Test() { cout << "Destructor of Test " << endl; } 
}; 
int main() 
{ 
Test t1; 
cin>>t1.a;
try { 
	
	if(t1.a==4)
	throw 4; 
} 
catch(int i)
 { 
	cout << "Caught " << i << endl; 
} 
} 

