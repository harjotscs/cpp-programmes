#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class store
{
        char name[20],team[10];
        double p,q;
        public:
                void getdata()
                {
                        cout<<"enter the name of the player:";
                        fflush(stdin);
                        gets(name);
                        cout<<"enter the team name:";
                        fflush(stdin);
                        gets(team);
                        cout<<"enter the strike rate:";
                        cin>>q;
                        cout<<"enter the highest runs";
                        cin>>p;
                }
                 showdata()
                {
                	cout<<"-----DETAILS----------DETAILS----------DETAILS----------DETAILS----------DETAILS-----\n";
                        cout<<"name:";
                        fflush(stdout);
                        puts(name);
                        cout<<endl;
                        cout<<"team:";
                        fflush(stdout);
                        puts(team);
                        cout<<endl;
                        cout<<"strike rate:"<<q<<endl;
                        cout<<"Highest Runs"<<p<<endl;
                        cout<<"-----END----\n";
                }
                void enter_new()
                {
                        store s;
                        char ch;
                        ofstream o("ipl.txt",ios::binary|ios::app);
                        
                        do
                        {
                                cout<<"enter the details of the player:";
                                s.getdata();
                                o.write((char*)&s,sizeof(s));
                                cout<<"do you want to enter new data(y/n)";
                                cin>>ch;
                        }while(ch=='y'||ch=='Y');
                o.close();
                }
                
                void list_data()
                {
                        store s1;
                        ifstream i;
                        i.open("ipl.txt",ios::binary);
                        while(i.read((char*)&s1,sizeof(s1)))
                        {
                                s1.showdata();
                        }
                i.close();
                }
                void particular_data()
                {
                        store s2;
                        char nm[20];
                        ifstream n;
                        n.open("ipl.txt",ios::binary );
                        n.seekg(0,ios::beg);
                        cout<<"enter the  name of the player:";
                        cin>>nm;
                        while(n.read((char*)&s2,sizeof(s2)))
                        {
                                        if(strcmp(s2.name,nm)==0)
                                {
                                        s2.showdata();
                                }
                                        
                        }
                }
                void pt()
                {
                        store s3;
                        char nam[20];
                        ifstream na;
                        na.open("ipl.txt",ios::binary );
                        na.seekg(0,ios::beg);
                        cout<<"enter the  name of the team:";
                        cin>>nam;
                        while(na.read((char*)&s3,sizeof(s3)))
                        {
                                        if(strcmp(s3.team,nam)==0)
                                {
                                        s3.showdata();
                                }
                                        
                        }
                }
                void del()
                {
                
                	fstream fin;
                	 fin.open("ipl.txt",ios::trunc|ios::out|ios::binary);
     cout<<"\n Deleted the whole record successfully";
				}
              void mx()
                  {
	store s4;
                        char nam[20];
                        ifstream na;
                        na.open("ipl.txt",ios::binary );
                        na.seekg(0,ios::beg);
                        cout<<"enter the  name of the player:";
                        cin>>nam;
                        while(na.read((char*)&s4,sizeof(s4)))
                        {
                                        if(strcmp(s4.name,nam)==0)
                                {
                                      if(s4.q>100)
									  {
									  	s4.showdata();
									  	cout<<"players strike rate is greater than 100\n so he should be slected";
										}  
                                }
                                        
                        }
	
                      }
                       void mod()
				{
				store v;
                        char nwm[20];
                        fstream nfs;
                        nfs.open("ipl.txt",ios::in|ios::out|ios::binary );
                        nfs.seekg(0,ios::beg);
                        cout<<"enter name:-";
                        cin>>nwm;
                        while(nfs.read((char*)&v,sizeof(v)))
                        {
                                        if(strcmp(v.name,nwm)==0)
                                {
                                       nfs.seekg(0,ios::cur);
				cout<<"Enter New Record.."<<endl;
				v.getdata();
				nfs.seekp(nfs.tellg()-sizeof(v));
				nfs.write((char*)&v, sizeof(v));
                                }
                        }
                        
								}      

};
int main()
{
        store s1;
        
        char ch;
        cout<<"**********  INDIAN PREMEIR LEAGUE  **********";
        cout<<" \n\t1.enter Details\n\t2.veiw details \n\t3.Search players details\n\t4.search team details \n\t5.delete all records\n\t6.player selection\n\t7.Update records\n\t\tchoose your option:";
        cin>>ch;
        if(ch=='1')
        {
                s1.enter_new();
        }else if(ch=='2')
        {
                s1.list_data();
        }
        else if(ch=='3')
        {
                s1.particular_data();
        }
        else if(ch=='4')
        {
        	s1.pt();
		}
		else if(ch=='5')
        {
        	s1.del();
		}
		else if(ch=='6')
		{
			s1.mx();
		}
		else if(ch=='7')
		{
			s1.mod();
		}
        else 
        {
                cout<<"invalid option.....";
        }
}



