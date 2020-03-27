#include<iostream>
using namespace std;
class rect
{
	int l,b;
	public:
		rect()
		{
			l=5;
			b=4;
			cout<<"DEFAULT"<<endl;
		}
		
		rect(int j,int k)
		{
		l=j;
		b=k;
		}	
		  rect(rect &f)
		   {
		 	l=f.l;
		 	b=f.b;
		       }
		
		 a()
		 { 
		 cout<<l*b<<endl;		 }
			
}f,g;
int main()
{
   f.a();
   int x,y;
   cin>>x>>y;
  rect f(x,y);
   f.a();
   /*rect g=f;*/ rect g(f);
   f.a();  
   g.a();
}
