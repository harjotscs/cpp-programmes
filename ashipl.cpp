#include<iostream>
#include<cstring>
#include<string>
using namespace std;
#include<fstream>
class ip{
	private:
		char a[20],p[40],t[40],z[40];
		
		int b,c,d,i,r;
		public:
		int	h()//team
			{
				
				
				cout<<"Enter name of team:-\n";
				fflush(stdin);
				gets(a);
				cout<<"Enter name of team Owner:-\n";
				fflush(stdin);
				cin>>t;
				cout<<"\nEnter total no. of players in team:-\n";
				fflush(stdin);
				cin>>b;
				cout<<"Enter name of Coach of the players\n";
				cin>>z;
			}
			int j()
			{
				
				cout<<"Enter name of Player:-";
				gets(p);
				cout<<"Enter strike rate of player:-";
				cin>>r;
				cout<<"Enter highest runs sored:-";
				cin>>c;
			}
		int	k()
			{
				fflush(stdout);
				cout<"_____-------______-------______------______------______------\n";
				cout<<"name of team:-"<<a<<endl;
				cout<<"name of team Owner:-"<<t<<endl;
				cout<<"\nno. of players in team:-"<<b<<endl;
				cout<<"name of Coach of the players:-"<<z<<endl;
			cout<"_____-------______-------______------______------______------\n";
			}
			w()
			{
				ip s;
				ofstream o("ip.txt",ios::binary|ios::app);
				s.h();
				o.write((char*)&s,sizeof(s));
				o.close();
			}
			rj()
			{
				ip e;
				ifstream q;
				q.open("ip.txt",ios::binary);
				while(q.read((char*)&e,sizeof(e)))
				{
					e.k();
				}
			}
			 void pd()
                {
                        ip s2;
                        char nm[20];
                        ifstream n;
                        n.open("ip.txt",ios::binary );
                        n.seekg(0,ios::beg);
                        cout<<"enter name  of team:-";
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
					ip v;
                        char nm[20];
                        fstream ns;
                        ns.open("ip.txt",ios::in|ios::out|ios::binary );
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
  cout<<"Enter 1 to add details of team\n 2 to view details Of all teams\n 3 to search details of any team\n";
  cin>>a;
  if(a==1)
  {
  	d.w();
  }
	if(a==2)
	{
		d.rj();
	}
	if(a==3)
	{
		d.pd();
	}
	
}
