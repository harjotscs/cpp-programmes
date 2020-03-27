#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string a;
	ofstream f("secret.txt"); 
	getline(cin,a);
	f<<a;
	f.close();
	char b;
	ifstream k("secret.txt");
	{
		while(k)
		{
			k.get(b);
			if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
			{
				cout<<"vowel= "<<b<<endl;
			}
		}
	}
	
}
