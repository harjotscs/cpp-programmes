#include<iostream>
using namespace std;
class table 
{
	public:
	int	t()
		{
			int a,i;
			cin>>a;
			for(i=1;i<=10;i++)
			{
				cout<<a<<"x"<<i<<"="<<a*i<<"\n";
			}
		}
}j;
int main()
{
	j.t();
}
