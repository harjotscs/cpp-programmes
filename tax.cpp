#include<iostream>
#include<cstring>
using namespace std;
#include<fstream>
class med{
	private:
		char a[20];
		int b,c,d;
		public:
		int	h()
			{
				
				cout<<"Enter any no.";
				cin>>a;
				cout<<"Enter any no.";
				cin>>b;
				cout<<"Enter any no.";
				cin>>c;
				cout<<"Enter any no.";
				cin>>d;
			}
		int	k()
			{
				
				cout<<"q:-"<<a<<endl;
				cout<<"w.:-"<<b<<endl;
				cout<<"e.:-"<<c<<endl;
				cout<<"r.:-"<<d<<endl<<endl;
				
			}
			w()
			{
				med s;
				ofstream o("tax.txt",ios::binary|ios::app);
				s.h();
				o.write((char*)&s,sizeof(s));
				o.close();
			}
			r()
			{
				med e;
				ifstream q;
				q.open("tax.txt",ios::binary);
				while(q.read((char*)&e,sizeof(e)))
				{
					e.k();
				}
			}
			 void pd()
                {
                        med s2;
                        char nm[20];
                        ifstream n;
                        n.open("tax.txt",ios::binary );
                        n.seekg(0,ios::beg);
                        cout<<"enter name:-";
                        cin>>nm;
                        while(n.read((char*)&s2,sizeof(s2)))
                        {
                                        if(strcmp(s2.a,nm)==0)
                                {
                                        s2.k();
                                }
                                        
                        }
                }
                void mod()
				{
					med v;
                        char nm[20];
                        fstream ns;
                        ns.open("tax.txt",ios::in|ios::out|ios::binary );
                        ns.seekg(0,ios::beg);
                        cout<<"enter name:-";
                        cin>>nm;
                        while(ns.read((char*)&v,sizeof(v)))
                        {
                                        if(strcmp(v.a,nm)==0)
                                {
                                       ns.seekg(0,ios::cur);
				cout<<"Enter New Record.."<<endl;
				v.h();
				ns.seekp(ns.tellg()-sizeof(v));
				ns.write((char*)&v, sizeof(v));
                                }
                        }
                        
								}                
}d;
int main()
{
	
  int a;
  cin>>a;
  if(a==1)
  {
  	d.w();
  }
	if(a==2)
	{
		d.r();
	}
	if(a==3)
	{
		d.pd();
	}
	
}
