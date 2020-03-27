#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
class ad{
	char v[40];
	int a,b,c;
	public:
		void info()
                
                {
                        
                        cout<<"enter no.1:-";
			cin>>a;
			cout<<"enter no.2:-";
			cin>>b;
			cout<<"enter no.3:-";
			cin>>c;
                }
	void vinfo()
                {cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        cout<<"\nNo. 1:-";
                        fflush(stdout);
                        cout<<a<<"\n";
                        cout<<"No. 2:-"<<b<<endl;
                        cout<<"NO. 3:-"<<c<<endl;
                        cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                }
		get()
		{	ad s;
			
			ofstream o("te.txt",ios::binary|ios::app);
                           cout<<"enter the details of the medicine:\n";
                                s.info();
                                o.write((char*)(&s),sizeof(s));
                                cout<<"Above Entered Records Saved successfully\n do you want to enter new data(y/n)";
			o.write((char*)&s,sizeof(s));
		}
		put()
		{
			ad f;
			ifstream h;
			h.open("te.text",ios::binary);
			while(h.read((char*)(&f),sizeof(f)))
                        {
                                f.vinfo();
                        }
                        h.close();
                        cout<<"Entered Here";
			
		}
	/*	s()
		{
			char s[40];
			
		}
		*/
}l;
int main()
{
	
	
	l.put();
	
}
