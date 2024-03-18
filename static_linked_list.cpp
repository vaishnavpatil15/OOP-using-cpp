#include<iostream>
using namespace std;

struct node{

	int data;
	int next;

};

struct node n[10];
int head=1;

void getdata()
{
	for(int i=1;i<6;i++)
	{
		cout<<"enter data and next"<<endl;
		cin>>n[i].data;
		cin>>n[i].next;
	}
}

void traverse()
{
	int j=head;
	cout<<endl;
	while(j!=NULL)
	{
		cout<<n[j].data<<endl;
		j=n[j].next;
		
	}
	cout<<endl;
}

void insert(int val,int loc)
{
	n[loc].data=val;
	n[loc].next=head;
	head=loc;
}

void remove()
{
	struct node temp=n[head];
	head=n[head].next;


}

void search(int key)
{
    int j=head;
    while(j!=NULL)
    {
        if(n[j].data==key)
        {
            cout<<"search successfull"<<endl;
            cout<<key<<" is found at location "<<j<<endl;
            return;
        }
        j=n[j].next;
    }
}

int main(){
	
	getdata();
	traverse();
	insert(10,7);
    	insert(20,9);
	traverse();
	remove();
	traverse();	
    	search(12);
	
}
