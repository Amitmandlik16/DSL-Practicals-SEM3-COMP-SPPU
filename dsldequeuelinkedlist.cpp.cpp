#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
class sll
{
    public:
    sll()
    {
        head=temp=NULL;
        rear=front=NULL;
    }
    node *head,*temp,*rear,*front;
    void insertfront(int x);
    void insertrear(int x);
    void display();
    void deletefront();
    void deleterear();
};
void sll::insertfront(int x)
{
    node *nn;
    nn=new node;
    nn->data=x;
    if(head==NULL)
    {
        head=nn;
        front=head;
    }
    else
    {
        nn->next=head;
        head=nn;
    }
}
void sll::insertrear(int x)
{
    node *nn;
    nn=new node;
    nn->next=NULL;
    nn->data=x;
    if(head==NULL)
    {
        head=nn;
        rear=head;
    }
    else
    {
        rear->next=nn;
        rear=nn;
    }
}
void sll::deletefront()
{
    temp=head;
    head=head->next;
    delete temp;
}
void sll::deleterear()
{
    temp=front;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}
void sll::display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<", ";
        temp=temp->next;
    }
}
int main()
{
    sll t;
    int n,x,choice;
    while(1)
    {
        cout<<"\n Enter \n 1.insert front \n 2.insert rear \n 3.delete front \n 4.delete rear \n 5.display jobs"<<endl;;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter job number";
                cin>>x;
                t.insertfront(x);
                break;
            case 2:
                cout<<"Enter job number";
                cin>>x;
                t.insertrear(x);
                break;
            case 3:
                t.deletefront();
                break;
            case 4:
                t.deleterear();
                break;
            case 5:
                t.display();
                break;
            default:
                cout<<"Invalid choice";
        }
    }
    return 0;
}

