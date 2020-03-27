#include<iostream>
using namespace std;
void h(int x,int &y, int* z)
{
	x++;
	y++;
	*(++z);
}
int main()
{
	int a=10,b=20,c=30;
	h(a,b,&c);
	cout <<a<<"\n"<<b<<"\n"<<c;
}


