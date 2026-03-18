#include<iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node(int d) : data(d), next(NULL) {}

    friend class List;
};

class List
{
private:
    Node *head;

public:
    List() : head(NULL) {}

    void add_first(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
    }

    void add_last(int val)
    {
        Node *temp = new Node(val);

        if(head==NULL)
        {
            head=temp;
            return;
        }

        Node *p=head;
        while(p->next!=NULL)
            p=p->next;

        p->next=temp;
    }

    void display()
    {
        Node *p=head;
        while(p!=NULL)
        {
            cout<<p->data<<" -> ";
            p=p->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    List l;
    l.add_first(10);
    l.add_last(20);
    l.add_last(30);
    l.display();
}