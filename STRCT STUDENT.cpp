#include<iostream>
using namespace std;
#include<string.h>
struct student
{
	int r,rn,m;
	char n[20];
	struct address{
	int p;
	char c[20],d[20];
}j[10];
}a[10];

int main()
{
	int i,l,x;
	char k[20];
	cout<<"ENTER TOTAL NO. OF STUDENTS\n";
	cin>>l;
	for(i=0;i<l;i++)
	{
		cout<<"ENTER NAME OF THE STUDENT \n";
		cin>>a[i].n;
		cout<<"ENTER ROLL NO. \n";
		cin>>a[i].r;
		cout<<"ENTER REG NO. \n";
		cin>>a[i].rn;
		cout<<"ENTER TOTAL MARKS \n";
		cin>>a[i].m;
		cout<<"ENTER PINCODE \n";
		cin>>a[i].j[i].p;
		cout<<"ENTER DISTRICT \n";
		cin>>a[i].j[i].d;
		cout<<"ENTER CITY \n";
		cin>>a[i].j[i].c;
	}
	for(i=0;i<l;i++)
	{
		strupr(a[i].n);
		
		if(strcmp(a[i].n,"RAKESH")==0)
		{
		
			cout<<"FOUND";
			x=i+1;
			cout<<"LOCATION FOUND AT "<<x;
				}
		
	}

	
}
