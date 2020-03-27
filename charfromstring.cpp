#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    char a,n[50],*p;
    int i,j=0,o=0,pos=0;
 
    cout<<"Enter character which you wanna search ";
    cin>>a;
    cout<<"Enter the string/word from which you wanna search ";
    cin>>n;
    p=n;
    for (i=0;i<strlen(n);i++)
    {
        if (p[i]==a)
        {
            o=1;
            pos=i+1;
            cout<<"Position of" <<"\'"<<a<<"\'"<<"\tis/are\t"<<pos<<"\n";
            j++;
        }
    }
     if (o==1)
    {
        cout<<"\nCharacter"<<"\'"<<a<<"\'"<<"\tfound\t"<< j <<"\ttimes"<<"\n";
    }
    else
    {
        cout<<"Not found\n";
    }
}
