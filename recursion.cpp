#include <iostream>
using namespace std;
int r(int n) 
{
   static int i=0,j;
   if(n>0)
   {
      i=n%10;
      j=j*10+i;
	  r(n/10);
   }
   else
    {
	 return j;
    }
}
int main()
{
  int a,h;
   cout<<"Enter number"<<"\n";
   cin>>a;
   h=r(a);
   cout<<"reverse="<<h;
}
