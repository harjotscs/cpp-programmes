//wap to search an element in an array 
#include<iostream>
using namespace std;
int main()
{
	double *p,*o;
	int i;
	p=new double[2];
	o=new double(0);
	for(i=0;i<2;i++)
	{
		cin>>p[i];
	}
	for(i=0;i<2;i++)
	{
		*o=*o+p[i];
	}
	
	cout<<*o/2;
	delete[] p;
	delete o;
}
