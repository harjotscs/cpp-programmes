#include<iostream>
using namespace std;
int main()
{
	int a,b,i,s=0,n;
	for(i=100;i<1000;i++)
	{
		a=i;
		n=a;
	while(a>0)
	{
		b=a%10;
		s=s+(b*b*b);
		a=a/10;
	}
	if(s==n)
	{
		cout<<s<<endl;
	}
	s=0;
	}
}
