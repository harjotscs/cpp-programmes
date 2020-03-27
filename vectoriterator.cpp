#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
	vector<int>v(10);
	cout<<"size="<<v.size()<<"\n";
	for(int i=0;i<9;i++)
	{
		v[i]=i;
	}
	vector<int>::iterator i=v.begin();
	i+=5;
	v.insert(i,10);
	for(int i=0;i<10;i++)
	{
		cout<<v[i]<<"\t";
	}
}
