//need corrections in insertfront()


#include <iostream>
using namespace std;

#define max 10
class dequeue
    {
        int front,rear;
        int arr[max];
        public:
            dequeue()
                {
                    front=rear=-1;
                }
            void insertfront(int x);
            void deletefront();
            void insertrear(int x);
            void deleterear();
            void display();
    };
void dequeue::insertfront(int x)
    {   
        if(rear==max-1)
            {
                cout<<"dequeue overflow";
            }
        else{
                for(int i=0;i<=rear;i++)
                {
                    arr[i+1]=arr[i];
                    arr[front]=x;
                }
            }
        
    }
void dequeue::deletefront()
    {
        if(front==-1 && rear==-1)
            {
                cout<<"\n dequeue underflow";
            }
        else{
                front++;
            }
    }
void dequeue::insertrear(int x)
    {
        if( front==0 && rear==max-1)
            {
                cout<<"dequeue overflow";
            }
        if(front==-1 && rear==-1)
            {
                front=0;
            }
        rear++;
        arr[rear]=x;
    }
void dequeue::deleterear()
    {
        if(front==-1 && rear==-1)
            {
                cout<<"dequeue is empty";
            }
        else
            {
                rear--;
                cout<<"\n deleted rear element in dequeue";
            }
    }
void dequeue::display()
    {
        if(front==-1 && rear==-1)
            {
                cout<<"\n dequeue is empty";
            }
        else
            {
                cout<<"\n dequeue elements are ";
                for(int i=front;i<=rear;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
            }
    }
int main()
    {
        dequeue d;
        d.insertrear(5);
        d.insertrear(10);
        d.insertrear(15);
        d.insertrear(20);
        d.display();
        d.deleterear();
        d.display();
        d.insertfront(1);
        d.display();
        d.deletefront();
        d.display();
        return 0;
    }