#include <iostream>
using namespace std;

#define max 5
class circularqueue {
    int front, rear;
    int arr[max];
public:
    circularqueue() {
        front = rear = -1;
    }
    void insert(int x);
    void del();
    void display();
};

void circularqueue::insert(int x) {
    if ((rear + 1) % max == front) {
        cout << "pizza parlor is full" << endl;
    } else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % max;
        arr[rear] = x;
        cout<<"pizza order "<<arr[rear]<<" is placed"<<endl; 
    }
}

void circularqueue::del() {
    if (front == -1) {
        cout << "no orders" << endl;
    } else {
        if (front == rear) { // Queue has only one element
            front = rear = -1;
        } else {
            cout<<arr[front]<<" order served"<<endl;
            front = (front + 1) % max; // Move front ahead
        }
    }
}

void circularqueue::display() {
    if(front == -1) { 
       cout<<"no orders"<<endl; 
       return; 
   }

   cout<<"pizza orders are: ";
   if(rear >= front)
   {
       for(int i = front; i <= rear; i++)
           cout<<arr[i]<<" ";
   }
   else
   {
       for(int i = front; i < max; i++)
           cout<<arr[i]<<" ";
       
       for(int i = 0; i <= rear; i++)
           cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main() {
    circularqueue c;
    int ch;
    while(1)
        {
            cout<<"Enter Menu choice \n 1.place order \n 2.serve order \n 3.Display total orders \n";
            cin>>ch;
            switch(ch)
                {
                    case 1:
                        int x;
                        cout<<"Enter id number"<<endl;
                        cin>>x;
                        c.insert(x);
                        break;
                    case 2:
                        c.del();
                        break;
                    case 3:
                        c.display();
                        break;
                    case 4:
                        exit(0);
                }
        }
    
    return 0;
}
