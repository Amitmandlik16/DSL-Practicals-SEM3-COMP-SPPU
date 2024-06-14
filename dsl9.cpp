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
    sll total,vanilla,butterscotch,vanbat,vanorbat,vanorbatnot,notvanorbat;
    node *temp1,*temp2;
    int x,n,flag,count;
    cout<<"Enter total no of students in the class";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        x=i+1;
        total.insert(x);
    }
    total.display();
    cout<<"\n Enter total no of students who like vanilla icecream";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter rollno"<<endl;
        cin>>x;
        vanilla.insert(x);
    }
    butterscotch.display();
    cout<<"\n Enter total no of students who like butterscotch icecream";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter rollno"<<endl;
        cin>>x;
        butterscotch.insert(x);
    }
    butterscotch.display();
    for(temp1=vanilla.head;temp1!=NULL;temp1=temp1->next)
    {
        for(temp2=butterscotch.head;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->data==temp2->data)
            {
                vanbat.insert(temp1->data);
            }
        }
    }
    cout<<"\n Set of students who like both vanilla and butterscotch is";
    vanbat.display();
    for(temp1=vanilla.head;temp1!=NULL;temp1=temp1->next)
    {
        vanorbat.insert(temp1->data);
    }
    for(temp1=butterscotch.head;temp1!=NULL;temp1=temp1->next)
    {
        flag=0;
        for(temp2=vanilla.head;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->data==temp2->data)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            vanorbat.insert(temp1->data);
        }
    }
    cout<<"\n Set of students who like either vanilla or butterscotch"<<endl;
    vanorbat.display();
    for(temp1=vanorbat.head;temp1!=NULL;temp1=temp1->next)
    {
        flag=0;
        for(temp2=vanbat.head;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->data==temp2->data)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            vanorbatnot.insert(temp1->data);
        }
    }
    cout<<"\n Set of students who like either vanilla or butterscotch or not both";
    vanorbatnot.display();
    count=0;
    for(temp1=total.head;temp1!=NULL;temp1=temp1->next)
    {
        flag=0;
        for(temp2=vanorbat.head;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->data==temp2->data)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            notvanorbat.insert(temp1->data);
            count++;
        }
    }   
    cout<<"\n Number of students who like neither vanilla nor butterscotch is"<<count<<"\n are";
    notvanorbat.display();
    return 0;
}