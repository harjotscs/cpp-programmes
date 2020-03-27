#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
class med
{
	private:
        char n[20],cmp[10];
        int p,q,dd,mm,yy,d,m,y;
        public:
        	void info()
                
                {
                        cout<<"enter Word:";
                        fflush(stdin);
                        gets(n);
                        cout<<"enter meaning:";
                        fflush(stdin);
                        gets(cmp);
                       
                }
                void showdata()
                {cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        cout<<"\nWord:-";
                        fflush(stdout);
                        puts(n);
                        cout<<"\n";
                        cout<<"Its meaning is:-";
                        fflush(stdout);
                        puts(cmp);
                        cout<<"\n";
                        cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        
                }
                void showw()
                {cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        cout<<"\nWord:-";
                        fflush(stdout);
                        puts(n);
                        cout<<"\n";
                        cout<<"-----------------------------------++++++++++++++++++++++++++++++++++---------------------------------------\n";
                        
                }
                 void add()
                {
                        med s;
                        char ch;
                        ofstream o("dic.txt",ios::binary|ios::app);
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
                void vieww()
                {
                        med d;
                        ifstream i;
                        i.open("dic.txt",ios::binary);
                        while(i.read((char*)(&d),sizeof(d)))
                        {
                                d.showw();
                        }
                i.close();
                }
                 void view()
                {
                        med d;
                        ifstream i;
                        i.open("dic.txt",ios::binary);
                        while(i.read((char*)(&d),sizeof(d)))
                        {
                                d.showdata();
                        }
                i.close();
                }
                 void search()
                {
                        med r;
                        char nm[20];
                        ifstream n;
                        int no=0;
                        n.open("dic.txt",ios::binary );
                        n.seekg(0,ios::beg);
                        cout<<"enter Word to be Searched:";
                        cin>>nm;
                        while(n.read((char*)(&r),sizeof(r)))
                        {
                                        if(strcmp(r.n,nm)==0)
                                {
                                	no++;
                                        r.showdata();
                                }
                        }
                        if(no==0)
									  {
									  	
                                        	cout<<"No Medicine With this Name Found in Record\n";
										}  
                }
                
            }l;
int main()
{
	cout<<"WELCOME TO YOUR CONSOLE ADMIN\n PLEASE ENTER SERIAL NO. FROM MENU BELOW TO CHOOSE WHAT YOU WANT TO DO:-";
		
       	cout<<"\n\t1.Enter Details Of Medicines\n\t3.Details Of All The Medicines Available In Your Repository\n\t4.Search A Particular Medicine\n\t5.Exit\n";
	    int q;
      	cin>>q;
      	switch (q)
		{
			case 1:
			{
				system("cls");
				l.add();
				break;
			}	
			
			case 3:
			{
				system ("cls");
				cout << "===========================================================================================================" << endl;
				cout << "|                                          All Medicine Details Are As Follows                            |" << endl;
				cout << "=======++==================++================++===============++===============++==============++==========" << endl;
				l.view();
				break;
			}	
		case 4:
			{
				system ("cls");
				l.vieww();
				l.search();
			
				break;
			}	
				}

   }
