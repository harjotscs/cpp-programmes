//create a class student with roll no. and name for 5 student
#include<iostream>
#include<string.h>
using namespace std;
class student{
	private: int r;
	char *c;
	public:
	char *h;
	int i(){
	   cin>>r>>h;
	}
	void o()
	{
	    c=h;
		cout<<r<<endl<<c<<endl;
	}
}a;
int main()
{
    a.i();
    a.o();

}
