#include<iostream>
#include<fstream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
	int a;
	char s[20],sd[20];
	cin>>s>>sd;
	a=strcmp(s,sd);
	cout<<a;
}
