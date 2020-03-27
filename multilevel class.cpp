#include<iostream>
#include<stdlib.h>
using namespace std;
class admin
{
	int num;
	string name;
	public:
		int get()
		{
			cout<<"Enter Name\n";
			getline(cin,name);
		}
		int put()
		{
			cout<<name;
		}
};
class academics{
	public:
	int rollno,marks;
	int getdata()
	{
		cout<<"Enter Roll No.\n";
		cin>>rollno;
		cout<<"Enter marks\n";
		cin>>marks;
	}
	int putdata()
	{
		cout<<rollno<<endl<<marks;
	}
};
class school:public admin, public academics
{
	string schoolname, activityname;
	public:
	getdetail()
	{
		cout<<"Enter School Name\n";
		fflush(stdin);
		getline(cin,schoolname);
		cout<<"Enter activity Name\n";
		getline(cin,activityname);
	}
	putdetail()
	{
		cout<< schoolname<<"\n";
		
		cout<<activityname<<"\n";
		
	}
}o[3];
int main()
{
int i;
for(i=0;i<3;i++)
{
	o[i].get();
o[i].getdata();
o[i].getdetail();
o[i].put();
o[i].putdata();
o[i].putdetail();
}

}
