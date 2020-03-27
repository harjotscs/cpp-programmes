#include<iostream>
using namespace std;
class student 
{
	int rno,a;
	public:
	student(int x)
	{
	cout<<"Enter Roll No."<<endl;
	cin>>rno;
	cout<<rno<<endl;
	a=x;
	cout<<a;
	}
	
};
class course:public student
{
	private:
	int	cid;
		public:
			course(int c,int n):cid(c),student(n)
			{
				cout<<endl<<"Enter Course Id";
				cin>>cid;
				cout<<endl<<cid;
				
			}
};
int main()
{
course b(25,50);
 
}
