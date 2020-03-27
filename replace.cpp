#include<iostream>
using namespace std;
int main()
{
	char str[500];
	int n,i;
	cout<<" Enter total no. of elements including spaces and commas\n";
	cin>>n;
	cin.ignore();
		cin.getline(str,n);
	
	for(i=0;i<n;i++)
	{
		if(str[i]==',')
		{
			str[i]=';';
		}
	}
	cout<<str;
}
