#include<iostream>
using namespace std;
int main()
{
	int a,n,s=0;
cin>>n;
while(n>0)
{
	a=n%10;
	n=n/10;
	s=s*10+a;
	
}
cout<<s;
}
