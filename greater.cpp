#include<iostream>
using namespace std;
int main()
{
	int a,b,c,g;
	cout<<"ENTER THREE NUMBERS\n";
	cin>>a>>b>>c;
    g=a;
    
    if(b>g)
    {
    	g=b;
	}
	if(c>g)
	{
		g=c;
	}
	cout<<"Greatest number is:- "<<g;
}

