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
		    while(a>0)
	   {
		b=a%10;
		s=s+b*b*b;
		a=a/10;
	    }
	        if(s==n)
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
