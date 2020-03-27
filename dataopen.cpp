#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("out.txt");
	char str[300]="king of LPU";
	fout<<str;
	fout.close();
	
}
