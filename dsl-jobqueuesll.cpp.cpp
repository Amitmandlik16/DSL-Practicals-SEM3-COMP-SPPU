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
    }
    node *head,*temp;
    void insert(int x);
    void display();
    void deletejob();
};
void sll::insert(int x)
{
    node *nn;
    nn=new node;
    nn->next=NULL;
    nn->data=x;
    if(head==NULL)
    {
        head=nn;
        temp=head;
    }
    else
    {
        temp->next=nn;
        temp=nn;
    }
}
void sll::deletejob()
{
    temp=head;
    head=head->next;
    delete temp;
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
        cout<<"\n Enter \n 1.insert job \n 2.delete job \n 3.display jobs"<<endl;;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter job number";
                cin>>x;
                t.insert(x);
                break;
            case 2:
                t.deletejob();
                break;
            case 3:
                t.display();
                break;
            default:
                cout<<"Invalid choice";
        }
    }
    return 0;
}
