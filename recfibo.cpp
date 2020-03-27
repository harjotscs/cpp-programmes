#include<iostream>
using namespace std;
int f(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	return f(n-1)+f(n-2);
}
int main()
{

int c=0,n;

    cout<<"Enter terms upto which you want to show fibbonacci series \t";
    cin>>n;
     while(c<n)
     {
     	cout<<f(c)<<",";
     	 c++;
     	
	 }

}
