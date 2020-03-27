#include<iostream>
using namespace std;
class table 
{
    private:
        int   a,b;
	public:
	int	t()
		{
			cin>>a>>b;	
		}
	int	h()
		{
			
			int i,n;
			for(n=a;n<=b;n++)
			{
				for(i=1;i<=10;i++)
			{
				cout<<n<<"x"<<i<<"="<<n*i<<"\n";
			}
				cout<<"\t";
			}
			
		}
}j;
int main()
{
    j.t();
    j.h();
}
