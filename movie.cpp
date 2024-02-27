#include<iostream>
#include<iomanip>
using namespace std;
class Movie{
	string name;
	int atp=100;
	int ctp=50;
	int adult,child;
	int ga,char_per,don;
	
	public:
		
	void getData()
	{
		cout<<"enter movie name"<<endl;
		cin>>name;
		cout<<"enter adult tickets"<<endl;
		cin>>adult;
		cout<<"enter child tickets"<<endl;
		cin>>child;
	}
	
	void ticket()
	{
		cout<<"the name of moviue is "<<name<<endl;
		cout<<"total adult amout = "<<adult*atp<<endl;
		cout<<"total child amout = "<<child*ctp<<endl;
		ga=adult*atp+child*ctp;
		cout<<"gross amount = "<<ga<<endl;
		cout<<"donation="<<ga*0.1<<endl;
		
	}
	
};





int main()
{
	
	Movie b;
	b.getData();
	b.ticket();

}
