#include<iostream>
using namespace std;
class book
{
private:
int p; char n[40];
public:
void getdata()
{
cout<<enter book price;
cin>>p;
cout<<enter book name;
cin>>n; }
void display(); 
 };
void book ::display()
{
cout<<book name=<<n;
cout<<book price=<<p;
}
void main()
{
class book obj;
obj.getdata();
obj.display();
}



