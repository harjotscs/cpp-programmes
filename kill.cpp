#include<iostream>
using namespace std;
class check
{
	int a,b,s,n;
	public:
inline 	void r()
	{
			cin>>a;
	n=a;
	}
	inline void c()
	{
		b=a%10;
		b=s+b*b*b;
		s=b;
		a=a/10;
		b=a%10;
		b=s+b*b*b;
		s=b;
		a=a/10;
		b=a%10;
		b=s+b*b*b;
		s=b;
		a=a/10;
	        if(b==n)
	         {
		cout<<n<<" is an armstrong no.";
            	}
             	else
                	{
		cout<<n<<" is not an armstrong no.";
                    	}
	}
}l;
int main()
{
	l.r();
	l.c();
}
