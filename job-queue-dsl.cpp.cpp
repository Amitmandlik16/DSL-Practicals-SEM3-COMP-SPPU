#include <iostream>
using namespace std;

#define max 10
class queue
    {
        int jobarr[max];
        int start,end,a;
        public:
        queue()
            {
                start=-1;
                end=-1;
            }
        void push(int x);
        int pop();
        void display();
    };
void queue::push(int x)
    {
        if(end==max-1)
            {
                cout<<"queue underflow";
            }
        else
            {
                end++;
                jobarr[end]=x;
            }
    }
int queue::pop()
    {
        if(start==end)
            {
                cout<<"queue is empty";
                return -1;
            }
        else
            {
                cout<<"job" <<jobarr[start]<<"is deleted sucessfully";
                start++;
            }
    }
void queue::display()
    {
        if(start==end)
            {
                cout<<"queue is empty";
            }
        for(int i=start+1;i<=end;i++)
            {
                cout<<"\n"<<"queue is ";
                cout<<jobarr[i];
            }
    }
int main()
    {
        queue jobs;
        int choice,n;
        while(1)
            {
                cout<<"\n Enter";
                cout<<"\n 1.display jobs \n 2.Add job \n 3.Delete job \n 4.Exit"<<endl;;
                cin>>choice;
                switch(choice)
                    {
                        case 1:
                            jobs.display();
                            break;
                        case 2:
                            int n;
                            cout<<"Enter job number";
                            cin>>n;
                            jobs.push(n);
                            break;
                        case 3:
                            jobs.pop();
                            break;
                        case 4:
                            exit(0);
                        default:
                            cout<<"Invalid choice";
                    }
            }
        return 0;
    }