#include<iostream>
using namespace std;
class st{
	int rno;
	public:
		st(int h)
		{ rno=h;
			cout<<rno;
		}
		~st()
		{
			cout<<endl<<"destructor student";
		}
};
class cor:public st{
	int ci;
	public:
		cor(int f,int g):ci(f),st(g)
		{
			cout<<endl<<ci;
		                     
		}
		~cor()
		{
			cout<<endl<<"destructor cor";
		}
};
int main()
{
	cor(54,89);

}
