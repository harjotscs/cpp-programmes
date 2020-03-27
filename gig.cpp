#include<iostream>
using namespace std;
class Area
{

public:
    void GetA(int x,int y)
    {
       cout<<"\n Area =  "<<x*y;
    }
    };


class Perimeter
{

public:
    void GetB(int x,int y)
    {
       cout<<"\n\n Area =  "<<2*(x+y);
    }

};



class Rect:private Area, protected Perimeter
{

public:
    void GetData(int l,int b)
    {
        GetA(l,b);
        GetB(l,b);
    }
};
int main()
{
    Rect o;
    o.GetData( 5,6);
}
