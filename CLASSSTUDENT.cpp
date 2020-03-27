#include<iostream>
using namespace std;
class student 
{
	 private:
       int r,i,a[5],c;
			char n[20],f[20];
	public:
	int	t()
		{
			
			cout<<"ENTER YOUR ROLL NO.\n";
			cin>>r;
			cout<<"ENTER YOUR NAME\n";
			cin>>n;
			cout<<"ENTER YOUR FATHER NAME\n";
			cin>>f;
			cout<<"ENTER YOUR CGPA\n";
			cin>>c;
			for(i=0;i<5;i++)
			{
			cout<<"ENTER YOUR MARKS IN SUBJECT"<<i+1<<"\n";
				cin>>a[i];
			}
		}
		int h()
			{
				cout<<"YOUR ROLL NO.=";
			cout<<r<<"\n";
			cout<<"YOUR NAME IS =";
			cout<<n<<"\n";
			cout<<"YOUR FATHER NAME IS=";
			cout<<f<<"\n";
			cout<<"YOUR CGPA IS=";
			cout<<c<<"\n";
			for(i=0;i<5;i++)
			{
				cout<<" YOUR MARKS IN SUBJECT"<<i+1<<"=";
				cout<<a[i]<<"\n";
			}
			}		
}j[10];
int main()
{
	int i;
	for(i=0;i<10;i++)
			{
			j[i].t();	
			}
			for(i=0;i<10;i++)
			{
	j[i].h();	
			}
	
}
