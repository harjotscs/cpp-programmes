#include<iostream>
using namespace std;
int main()
{
	int a[4][4],i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		cin>>a[i][j];
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
		
	}
	
}
