#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<windows.h>
#include<iomanip>
using namespace std;
////////////////////////////////
//Developer:-Harjot Singh    //
//E-mail:Harjotscs@gmail.com//
/////////////////////////////
int fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
class med
{
	private:
		float p;
        int q,dd,d,mm,m,yy,y;
        char n[40],cmp[40];
        public:
                int info()
                
                {
                        cout<<"enter the name of the medicine:";
                        fflush(stdin);
                        gets(n);
                        cout<<"Enter the company name:";
                        fflush(stdin);
                        gets(cmp);
                        cout<<"Enter the quantity:";
                        cin>>q;
                        cout<<"Enter the price:";
                        cin>>p;
                        cout<<"Enter the date of manufacture(dd-mm-yy):";
                        cin>>dd>>mm>>yy;
                        cout<<"Enter the expiry date(dd-mm-yy):";
                        cin>>d>>m>>y;
                }
                int vinfo()
                {cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        cout<<"\nName Of the medicine:-";
                        fflush(stdout);
                        puts(n);
                        cout<<"\n";
                        cout<<"Manufacturing Company:-";
                        fflush(stdout);
                        puts(cmp);
                        cout<<"\n";
                        cout<<"Quantity:"<<q<<" Pieces\n";
                        cout<<"Price"<<" Rs. "<<p<<endl;
                        cout<<"Date of manuacture(Date/Month/Year):"<<dd<<"-"<<mm<<"-"<<yy<<endl;
                        cout<<"Date of expiry(Date/Month/Year):"<<d<<"-"<<m<<"-"<<y<<endl;
                        cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        
                }
                int add()
                {
                        med s;
                        char ch;
                        ofstream o("medicine.txt",ios::binary|ios::app);
                        do
                        {
                                cout<<"enter the details of the medicine:\n";
                                s.info();
                                o.write((char*)(&s),sizeof(s));
                                cout<<"Above Entered Records Saved successfully\n do you want to enter new data(y/n)";
                                cin>>ch;
                        }while(ch=='y'||ch=='Y');
                o.close();
                }
                
                int view()
                {
                        med d;
                        ifstream i;
                        i.open("medicine.txt",ios::binary);
                        while(i.read((char*)(&d),sizeof(d)))
                        {
                                d.vinfo();
                        }
                i.close();
                }
                int search()
                {
                        med r;
                        char nm[20];
                        ifstream n;
                        int no=0;
                        n.open("medicine.txt",ios::binary);
                        n.seekg(0,ios::beg);
                        cout<<"enter the  name of the medicine:";
                        cin>>nm;
                        while(n.read((char*)(&r),sizeof(r)))
                        {
                                        if(strcmp(r.n,nm)==0)
                                {
                                	no++;
                                        r.vinfo();
                                }
                        }
                        if(no==0)
									  {
									  	
                                        	cout<<"No Medicine With this Name Found in Record\n";
										}  
                }
int del()
{ med l;
    char ch;
    system("cls");
 int k;
 char x[20];
 fstream fin,fout;
 cout<<"\n Choose from the menu below:- \n1. Deleting whole file \n2. Deleting a particular record\n";
 cin>>k;
 if(k==1)
 {
     fin.open("medicine.txt",ios::trunc|ios::out|ios::binary);
     cout<<"\n Deleted the whole list of medicine successfully";
}
else if(k==2)
{
fin.open("medicine.txt",ios::in|ios::binary);
 fout.open("med.txt",ios::out|ios::app|ios::binary);
 cout<<"\n Enter the name of the medicine you want to delete ";
 cin>>x;
while(!fin.eof())
{
    fin.read((char*)& l,sizeof(l));
    if(fin.eof())
        break;
    else if(strcmp(l.n,x)==0)
    {
         cout<<"\n The record is ::";
        l.vinfo();
        cout<<"\n Are you Sure want to delete ?(y/n)";
        cin>>ch;
        if(ch=='n'||ch=='N')
     fout.write((char*)&l,sizeof(l));
     else
        cout<<"\n Deleted the record successfully ";
    }

   else
        {fout.write((char*)&l,sizeof(l));}
}

}
   else
        cout<<"\n Wrong Input Entered ";
fin.close();
fout.close();


remove("medicine.txt");
rename("med.txt","medicine.txt");

}

}l;
int main()
{
	fullscreen();
     	ofstream gtr("user.txt",ios::app);
     	gtr.close();
	char g;
	int i=0;
	ifstream k("user.txt");
	while(!k.eof())
	{
		k.get(g);
		i++;
	}	
	k.close();
	
	if(i<=1)
	{
		system("Color 34");
		ofstream x("user.txt",ios::binary);
	string p;
	cout<<"HI ADMINISTRATOR PLEASE SET YOUR PASSWORD\n";
	getline(cin,p);
	x<<p;
	x.close();
	}
	ifstream m("user.txt",ios::binary);
	string j;
	getline(m,j);
	m.close();
	pass:
		system("cls");
	cout<<"\t\tBonjour, Admnistrator Please Enter your Password To Verify Security Check\t\n";
	system("Color 4e");
	string a;
	cin>>a;
	if (j.compare(a)!= 0)
	{
		system("Color 72");
		cout<<"Wrong Password\n*************************** Please Try Again, Inconvenience Is Regretted ***************************";
		char md;
		cout<<"\nEnter y if you want to try again or press n to exit\n";
		cin>>md;
		if(md=='N'||md=='n')
		{
			cout<<"\nPlease Try Again, Inconvenience Is Regretted \n";
			exit(0);
		}
		else if(md=='Y'||md=='y')
		{
			goto pass;
		}
	
	}
	else if(j.compare(a)==0)
	{
		system("cls");
		cout<<"WELCOME TO YOUR CONSOLE ADMIN\n PLEASE ENTER SERIAL NO. FROM MENU BELOW TO CHOOSE WHAT YOU WANT TO DO:-";
		menu:
			system("Color 1E");
	cout<<"\n\t1.Enter Details Of Medicines\n\t2.Delete Records of Certain Medicine\n\t3.Details Of All The Medicines Available In Your Repository\n\t4.Search A Particular Medicine\n\t5.Exit\n";}
	    int q;
      	cin>>q;
      	switch (q)
		{
		case 1:
			{
				system("COLOR FC");
				system("cls");
				l.add();
				system("cls");
				goto menu;
				break;
			}	
		case 2:
			{
				system("color f4");
				system ("cls");
				l.del();
				goto menu;
				break;
			}	
			
		case 3:
			{
				system("color df");
				system ("cls");
				cout << "===========================================================================================================" << endl;
				cout << "|                                          All Medicine Details Are As Follows                            |" << endl;
				cout << "=======++==================++================++===============++===============++==============++==========" << endl;
				l.view();
				system("PAUSE");
				system("cls");
					goto menu;
				break;
			}	
     	case 4:
			{
				system("color b0");
				system ("cls");
				l.search();	
				goto menu;
				break;
			}
        case 5:
			{
				system("color 78");
				system("cls");
				cout<<"Have A Nice Day :-)";
				break;
			}	
		default:
			{
				system("cls");
				cout<<"Caution: You entered a wrong input\n Please try again"<<endl;
				break;
			}
	}
	
}
