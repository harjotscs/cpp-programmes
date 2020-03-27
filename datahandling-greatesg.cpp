#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	ofstream f;
	
	f.open("gre.txt");
	int a=0,b=0,c=0,l=0;
	int x=0,y=0,z=0;
	cin>>a>>b>>c;
	f<<a<<b<<c;
	f.close();
	ifstream n("gre.txt");
		n>>x;
		n>>y;
		n>>z;
		cout<<x<<y<<z;
	 n.close();
	 ofstream d("ok.txt");
	 l=x;
	 if(y>l)
	 {
	 	l=y;
	 }
	 if(z>l)
	 {
	 	l=z;
	 }
	 cout<<l;
	 d<<l;
	 d.close();
}
