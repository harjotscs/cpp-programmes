#include<iostream>
#include<fstream>
using namespace std;
int main()
{
char a[40];
	ofstream o("myd.txt",ios::in);
	cin>>a;
	o<<a;
}
