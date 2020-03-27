#include <iostream>
using namespace std;
class ki{
	int n;
	public:
		int r(int n) 
{
   static int i=0,j;
   if(n>0)
   {
      i=n%10;
      j=j*10+i;
	  r(n/10);
   }
   else
    {
	 return j;
    }
}
	int	g()
		{
			int h;
			cin>>n;
			h=r(n);
			cout<<h;
		}
}l;

int main()
{
	l.g();
}
