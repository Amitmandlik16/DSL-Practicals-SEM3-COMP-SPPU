#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next,*prev;
};
class dll
{
    public:
    node *head,*temp;
    dll()
    {
        head=temp=NULL;
    }
    void insert(int x);
    void display();
};
void dll::insert(int x)
{
    node *nn;
    nn=new node;
    nn->next=NULL;
    nn->prev=NULL;
    nn->data=x;
    if(head==NULL)
    {
        head=nn;
        temp=head;
    }
    else
    {
        temp->next=nn;
        nn->prev=temp;
        temp=nn;
    }
}
void dll::display()
{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}
int main()
{
    dll bin,comp1,comp2;
    node *temp;
    int x,n;
    cout<<"Enter total bit of number";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter bit =";
        cin>>x;
        bin.insert(x);
    }
    bin.display();
    cout<<"\n 1's complement of given binary number is";
    for(temp=bin.head;temp!=NULL;temp=temp->next)
    {
        if(temp->data==1)
        {
            comp1.insert(0);
        }
        else
        {
            comp1.insert(1);
        }
    }
    comp1.display();
    cout<<"\n 2nd complement of given binary numbers is";
    for(temp=comp1.head;temp->next!=NULL;temp=temp->next)
    {
    }
    for(temp;temp!=NULL;temp=temp->prev)
    {
        cout<<temp->data;
    }
    cout<<temp->data;
    return 0;
}