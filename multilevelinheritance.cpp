#include<iostream>
using namespace std;
class student
{
	char n[30];
	int r;
	public:
		get()
		{
			cout<<"Enter Name\n";
			cin>>n;
			cout<<"Enter roll no.\n";
			cin>>r;
		}
		char* putn()
		{
			return n;
		}
		int putr()
		{
			return r;
		}
};
class test:public student
{
	int m1,m2;
	public:
		getm()
		{
				cout<<"\nEnter sub 1 Marks\n";
	cin>>m1;
	cout<<"Enter sub 2 Marks\n";
	cin>>m2;
		}
		int putm1()
		{return m1;
		}
		int putm2()
		{return m2;
		}
};
class result:public test
{
	int avg;
	public:
		geta()
		{
			cout<<"\n Enter avg marks\n";
			cin>>avg;
		}
		display()
		{
				cout<<"your Name="<<putn()<<endl;
			
			cout<<"your roll no.="<<putr()<<endl;
			cout<<"sub 1 Marks="<<putm1()<<endl;
	cout<<"sub 2 Marks="<<putm2()<<endl;
	cout<<"\n your avg marks="<<(putm1()+putm2())/2<<endl;
		}
}o;
int main()
{
	o.get();
	o.getm();
	o.geta();
	o.display();
	
}
