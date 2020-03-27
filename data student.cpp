#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a;
	int r,m;
	ofstream f("student.txt"); 
	cout<<"enter name"<<endl;
	getline(cin,a);
	cout<<"enter roll no."<<endl;
	cin>>r;
	cout<<"enter Marks"<<endl;
	cin>>m;
	f<<a<<" "<<r<<" "<<m;
	f.close();
	char j;
	ifstream k("student.txt");
	{
		
		while(k)
		{
			k.get(j);
				cout<<j;
		}
	}
	
}
