#include<iostream>
using namespace std;

class Node{
    public:
	int data;
	Node* next;
	
	/*Node(int a, Node* b)
	{
		data=a;
		next=b;
	}*/
};
class List{
    public:
	Node* head;
	List(){
		head = nullptr;
	}
	// head->data = 1;
	// head->next = nullptr;
	
	void insert( int val )
	{
	
		Node* newNode = new Node;
		newNode->data=val;
		newNode->next=head;
		head=newNode;

	}	
	void remove()
	{
		Node* temp=head;
		head=head->next;
		delete temp;
	}
	
	void display(){
	    Node* temp=head;
	    while(temp!=NULL){
	        cout<<temp->data<<endl;
	        temp=temp->next;
	    }
	    
	}

	void search(int key){
		int loc=0;
		Node* temp=head;
		while(temp!=NULL){
			if(temp->data==key){
				loc++;
				cout<<"search successfull"<<endl<<key<<"found at location "<<loc<<endl;
				return;
			}
			else{
				temp=temp->next;
				loc++;
			}
			cout<<"search unsuccessfull"<<endl<<element not found<<endl;
		}
	}
	
};

int main()
{
	List l1;
	l1.insert(1);
	l1.insert(2);
	l1.insert(3);
	l1.insert(4);
	l1.insert(5);
	l1.insert(6);
	l1.display();
	l1.remove();
	l1.display();
	l1.search(5);
	
	
}






