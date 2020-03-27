//wap declare 10 elements and add 10 more elements, print all vector 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	int i;
	for(i=0;i<v.size();i++)
	{
		cin>>v[i];
	}
		for(i=30;i<40;i++)
	{
		v.push_back(i);
	}
	for(i=0;i<v.size();i++)
	{
	/*	cout<<"\t"<<v[i]<<"\t"; if you want pattern try this*/
		cout<<v[i]<<"\t";
	}
}
