#include<iostream>
using namespace std;

class Node{
	public:
    int data;
    Node* next;
};

class Queue{
	public:
    Node* front;
    Node* rear;

    Queue()
    {
        front=NULL;
        rear=NULL;
    }

    void enque(int val)
    {
        Node* newNode= new Node;
        newNode->data=val;
        newNode->next=NULL;
        if (front==NULL&&rear==NULL)
        {
            front=newNode;
            rear=newNode;
        }
        else{
            rear->next=newNode;
            rear=newNode;
        }
        
    }

    void deque()
    {
        
        if(front==rear)
        {
            front=NULL;
            rear=NULL;
        }
        else
        {
        	Node* temp;
            temp=front;
            front=front->next;
            delete temp;
        }
    }

    void traverse()
    {
        Node* ptr;
        ptr=front;
        cout<<endl;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        cout<<endl;
    }

};

int main()
{
    Queue q1;
    q1.enque(10);
    q1.enque(20);
    q1.enque(30);
    q1.traverse();
    q1.deque();
    q1.traverse();
}


