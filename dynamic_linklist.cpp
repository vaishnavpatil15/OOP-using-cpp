#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node()
    {
        data=0;
        next=NULL;
    }
};

class List{
    public:
    Node* head;

    List()
    {
        head=NULL;
    }

    void add(int val)
    {
        Node* newNode= new Node;
        newNode->data=val;
        newNode->next=head;
        head=newNode;
    }

    void remove()
    {
        Node* temp=head;
        head=head->next;
        free(temp);
    }

    void display()
    {
        cout<<endl<<endl;
        Node* ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
        cout<<endl;
    }

    void search(int key)
    {
        int n=0;
        Node* ptr=head;
        while(ptr!=NULL)
        {
            if(ptr->data==key)
            {
                n++;
                cout<<"search successfull"<<endl;
                cout<<"element "<<key<<" found at loc "<<n<<endl;
                return;
            }
            else
            {
                ptr=ptr->next;
                n++;
            }
        }
    }
};


int main ()
{
    List l1;
    l1.add(1);
    l1.add(2);
    l1.display();
    l1.add(5);
    l1.add(9);
    l1.add(6);
    l1.display();
    l1.remove();
    l1.display();
    l1.search(9);

}