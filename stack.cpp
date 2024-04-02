#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Stack{
    public:

    Node* top;
    Stack(){
        top=NULL;
    }

    void push(int val)
    {
        Node* newNode = new Node;
        newNode->data=val;
        newNode->next=top;
        top=newNode;
    }
    
    void pop()
    {
    	Node* temp=top;
    	top=top->next;
    	free(temp);
	}
	
	void traverse()
	{
		Node* ptr=top;
		cout<<endl;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<endl;
			ptr=ptr->next;
		}
		cout<<endl;
	}
	
	void search(int key)
	{
		Node* ptr=top;
		int loc=1;
		while(ptr!=NULL)
		{
			if(ptr->data==key)
			{
				cout<<"search successfull"<<endl;
				cout<<"found "<<key<<" at loc "<<loc<<endl;
				return;
			}
			else
			{
				loc++;
				ptr=ptr->next;
			}
		}
		
	}

};

int main()
{
	Stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.traverse();
	s1.pop();
	s1.traverse();
	s1.search(20);
}





