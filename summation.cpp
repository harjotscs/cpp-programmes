//add 1 integer and float and char
//wap to find sum of array element integer array
#include<iostream>
using namespace std;
template <class j>
j f(j a[],j n)
{
	j d=0;
	int i;
	for(i=0;i<n;i++)
	{
		d=d+a[i];
	}
	cout<<"sum= "<<d;
}
    int main()
    {
    	int x[10],n,i=0;
    	cout<<"Enter total no. of elements of array"<<endl;
    	cin>>n;
    	cout<<"Enter all elements of array"<<endl;
    	for(i=0;i<n;i++)
    	{
    		cin>>x[i];
		}
		f(x,n);
		float z[10],n1;
    	cout<<"\nEnter total no. of elements of array"<<endl;
    	cin>>n1;
    	cout<<"Enter all elements of array"<<endl;
    	for(i=0;i<n1;i++)
    	{
    		cin>>z[i];
		}
		f(z,n1);
	}
