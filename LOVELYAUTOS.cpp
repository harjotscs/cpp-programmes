#include<iostream>
using namespace std;
class student 
{
	 private:
       int r,i,e;
			char n[20],f[20];
	public:
	int	t()
		{
			
			cout<<"ENTER MANUFACTURER YEAR OF CAR\n";
			cin>>r;
			cout<<"ENTER MODEL NAME\n";
			cin>>n;
			cout<<"ENTER COLOUR\n";
			cin>>f;
			cout<<"ENTER ENGINE NO.\n";
			cin>>e;
		}
		int h()
			{
				cout<<"MANUFACTURER YEAR OF CAR.=";
			cout<<r<<"\n";
			cout<<"MODEL NAME IS =";
			cout<<n<<"\n";
			cout<<"COLOUR IS=";
			cout<<f<<"\n";
			cout<<"ENGINE NO.=";
			cout<<e<<"\n";
			}		
}j;
int main()
{
	j.t();
	j.h();
}
