#include<iostream>
#include<iomanip>
using namespace std;
class Movie{
	string name;
	int atp;
	int ctp;
	int adult,child;
	int ga,char_per,don;
	
	public:

	Movie()
	{
		atp=100;
		ctp=50;
	}
	Movie(int a, int b)
	{
		atp=a;
		ctp=b;
	}
		
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
		cout<<"donation="<<ga*0.1<<endl<<endl;
		
	}
	
};





int main()
{
	
	Movie m1;
	m1.getData();
	m1.ticket();

	Movie m2(5,10);
	m2.getData();
	m2.ticket();

}
