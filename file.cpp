#include<iostream>
#include<fstream>
using namespace std;
int main()
{

 float height=455.5;
 ofstream outfile;
 outfile.open("filename.txt");
 outfile.write(( char *)& height,sizeof(height));
 outfile.close();
 ifstream m;
 m.open("filename.txt");
 float h,d;
  m.read((char*) & h,sizeof(h));
d=h;
  m.close();
    cout<<d
	;
}
