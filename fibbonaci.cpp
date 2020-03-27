#include<iostream>
using namespace std;
int main()
{

int a=1,b=1,c,n;

    cout<<"Enter terms upto which you want to show fibbonacci series \t";
    cin>>n;
    c=a+b;
    cout<<a<<","<<b<<",";
     while(c<=n)
     {
     	cout<<c<<",";
     	a=b;
     	b=c;
     	c=a+b;  	
	 }
	
}
