#include<iostream>
 #include<math.h>
 #define PI 3.14159265
using namespace std;
int main()
{
	int n1,n2;
       double x,a,z,f;
       cout<<"\n Enter the angle of incidence = ";
       cin>>x;
  a= sin (x*PI/180);
  cout<<"\n Enter the index of refraction in material 1 = ";
  cin>>n1;
  cout<<"\n Enter the index of refraction in material 2 = ";
  cin>>n2;
  z=(n1*a)/n2;
  f=asin(z)*180.0/PI;
       cout<<"Angle of Refraction= "<<f<<endl;

}
