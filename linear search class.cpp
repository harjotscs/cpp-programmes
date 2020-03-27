#include<iostream>
using namespace std;
class search
{
	int a[5],s,n,i,c,m;
	public :
		r()
		{
			cout<<"ENTER TOTAL NO. OF ELEMENTS";
		  cin>>n;
		  cout<<"ENTER ALL THE ELEMENTS";
		  for(i=0;i<n;i++)
		   {
			cin>>a[i];
		   }	
		}
	o()
	{
		cout<<"ENTER ELEMENT TO BE SEARCHED ";
		cin>>s;
		for(i=0;i<n;i++)
		   {
			if (a[i]==s)
			{
				c++;
				m=i;
			}
		
		   }
		   if(c>0)
		   {
		   		cout<<"NUMBER FOUND AT "<<m+1<<" POSITION \n";
		   }
		   	else 
			{
				cout<<"NUMBER NOT FOUND \n";
			}
	}
		
}j;
int main()
{
	j.r();
	j.o();
}
