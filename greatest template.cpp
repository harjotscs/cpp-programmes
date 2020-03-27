//wapfind greatest of two number s1. integer 2. double
//wap swap two numbers 
#include<iostream>
using namespace std;
template <class j>
    j g(j a,j b,j c)
     {
     	 j d=a;
     	if(b>d)
     	{
     		d= b;
		 }
	if( c>d)
     	{
     		d= c;
		 }
		cout<<"greatest no.= "<<d<<endl;
            }
            int main()
            {
            	int a,b,c;
                g(2,5,3);
                g(2.25,4.36,8.36);
			}
