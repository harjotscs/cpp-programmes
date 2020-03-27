#include<iostream>
#include<fstream>
using namespace std;
#include<string.h>
int main()
{
/*	char a[20];
cin>>a;
strupr(a);
cout<<a;*/
/*string s,d;
s='4';
d='5';
d.swap(s);
cout<<s<<endl<<d;
s.clear();
cout<<"\n"<<s.empty()<<endl<<d.empty();
*/
/*string s("monday");
string d("12345");
d.append(s,1,4);
cout<<d;*/
ofstream o;
ifstream i("newfile.txt");
o.open("read.txt");
	char ch;
	
	while(!i.eof())
	{
		i.get(ch);
		o<<ch;
		
	}
	o.close();
	i.close();
}
