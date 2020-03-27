#include<iostream>
using namespace std;
struct student
{
	char n[40];
	int r;
	int c; 
}s[3];
int main()
{
	
	int i;
	 for(i=0;i<3;i++)
	 {
	 	cin>>s[i].n>>s[i].r>>s[i].c;
	 }
	    for(i=0;i<3;i++)
	    {
           cout<<"NAME="<<s[i].n<<"\n"<<"ROLL NO.="<<s[i].r<<"\n"<<"CLASS="<<s[i].c<<"\n";	    
        }
}
