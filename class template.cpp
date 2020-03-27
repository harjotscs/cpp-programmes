//two member function outside sum& difference using class template
#include<iostream>
using namespace std;
template<class t>
class mypair{
	t a,b;
	public:
		mypair(t first,t second)
		{
			a=first;
			b=second;
		}
		t getmax();
};
template <>
