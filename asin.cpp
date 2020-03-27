#include<iostream>
 #include<math.h>
 #define PI 3.14159265
using namespace std;
int main()
{
	double n1,n2;
       double x,a;
       cout<<"\n Enter the angle of incidence = ";
       cin>>x;

  a = asin (x) * 180.0 / PI;
  cout<<"\n Enter the index of refraction in material 1 = ";
  cin>>n1;
  cout<<"\n Enter the index of refraction in material 2 = ";
  cin>>n2;
       cout<<" Sin ("<<x<<") = "<<a<<endl;

}
