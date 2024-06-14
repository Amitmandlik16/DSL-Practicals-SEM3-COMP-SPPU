#include <iostream>
using namespace std;

#define max 5
class circularqueue
{
    int front,rear;
    int arr[max];
    public:
    circularqueue()
    {
        front=rear=-1;
    }
    void insert(int x);
    void display();
    void serve();
};
void circularqueue::insert(int x)
{
    if(front==(rear+1)%max)
    {
        cout<<"Cafe is full";
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        arr[rear]=x;
    }
    else
    {
        rear=(rear+1)%max;
        arr[rear]=x;
    }
}
void circularqueue::display()
{
    cout<<"\n orders are ";
    if(front==-1)
    {
        cout<<"Cafe is empty";
    }
    else if(rear>=front)
    {
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    else if(rear<front)
    {
        for(int i=front;i>=rear;i=(i+1)%max)
        {
            cout<<arr[i]<<"\t";
        }
    }
}
void circularqueue::serve()
{
    if(rear==front)
    {
        front=rear=-1;
    }
    else if(front==-1)
    {
        cout<<"cafe is empty";
    }
    else
    {
        front=(front+1)%max;
    }
}
int main()
{
    circularqueue cq;
    int n,x,choice;
    while(1)
    {
        cout<<"\n Enter \n 1.place order \n 2.serve order \n 3.display orders";
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter order number";
                cin>>x;
                cq.insert(x);
                break;
            case 2:
                cq.serve();
                break;
            case 3:
                cq.display();
                break;
            default:
                cout<<"Invalid choice";
        }
    }
    return 0;
}