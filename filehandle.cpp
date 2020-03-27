#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream k;
	char a[30];
	k.open("ing.txt",ios::out);
	cin>>a;
	k<<a;
	k.close();
	k.open("ing.txt",ios::in);
	char j;
	while(k)
	{
		k.get(j);
		cout<<j;
	}
	k.close();
}
