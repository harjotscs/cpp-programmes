#include<iostream>
#include<fstream>
using namespace std;
main()
{	char name[30];
	float cost;
	ofstream outf("item");
cout<<"enter item name";
cin>>name;
outf<<name;

cout<<"enter cost";
cin>>cost;
outf<<cost<<"\n";
outf.close();
ifstream inf("item");
inf>>name;
inf>>cost;

cout<<"item name"<<name;
cout<<"item cost"<<cost;
inf.close();

}

