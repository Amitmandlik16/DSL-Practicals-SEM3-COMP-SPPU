#include <iostream>
using namespace std;

#define max 50
class queue
{
    int front,rear;
    int job[max];
    public:
    queue()
    {
        front=rear=-1;
    }
    void push(int x);
    void pop();
    void display();
};
void queue::push(int x)
{
    if(rear==max-1)
    {
        cout<<"queue is overflow";
    }
    else if(front==-1)
    {
        front=0;
        rear=0;
        job[rear]=x;
    }
    else
    {
        rear++;
        job[rear]=x;
    }
}
void queue::pop()
{
    if(front==-1)
    {
        cout<<"stack is empty";
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front++;
    }
}
void queue::display()
{
    if(front==-1)
    {
        cout<<"There are no jobs";
    }
    else
    {
        cout<<"jobs are ";
        for(int i=front;i<=rear;i++)
        {
        cout<<job[i]<<"\t";
        }
    }
}
int main()
{
    queue q1;
    int choice,x;
    while(1)
    {
        
        cout<<"\n Enter options \n 1.Insert job \n 2.Delete job \n 3.Display jobs"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"\n Enter job id";
                cin>>x;
                q1.push(x);
                break;
            case 2:
                q1.pop();
                break;
            case 3:
                q1.display();
                break;
            default:
                cout<<"Invalid choice";
                break;
        }
    }
}