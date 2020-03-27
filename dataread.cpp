#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("out.txt");
	char ch;
	while(!fin.eof())/* while(fin) */
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
}
