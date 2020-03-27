#include<iostream>
using namespace std;
class google 
{
	 private:
       int r,i,e;
			char n[20],f[20];
	public:
	void t();
	void h();		
}j;
inline void	google:: t()
		{
			
			cout<<"ENTER AGE\n";
			cin>>r;
			cout<<"ENTER EMPLOYEE NAME\n";
			cin>>n;
			cout<<"ENTER MARITIAL STATUS\n";
			cin>>f;
			cout<<"ENTER EXPERIENCE\n";
			cin>>e;
		}
	inline	void google:: h()
		{
		
				cout<<"AGE=";
			cout<<r<<"\n";
			cout<<"EMPLOYEE NAME IS =";
			cout<<n<<"\n";
			cout<<"MARITIAL STATUS IS=";
			cout<<f<<"\n";
			cout<<"EXPERIENCE=";
			cout<<e<<"\n";
			if(r>=30 && r<=40 && e>4)
			{
				cout<<"YOU ARE ELIGIBLE";
			}
			else
			{
				cout<<"YOU ARE NOT ELIGIBLE";
			}
		
		}
int main()
{
	
	j.t();
	j.h();
}
