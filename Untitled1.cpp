#include<iostream>
using namespace std;
int main()
{
	int i,j,n=0;
 for(i=2;i<=100;i++)
	{
		n=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				n++;
			}	
		}
		if(n==2)
			{
				cout<<"\n"<<i<<" is a prime";		
			}	
	}
}
