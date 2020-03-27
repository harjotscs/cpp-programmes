#include<iostream>
using namespace std;
inline int h(int a,int j)
{
	int x;
	
x=a*j;
return x;
}
int main()
{
	int m,a,j;
	cin>>a>>j;
	m=h(a,j);
	cout<<m;
	
}
