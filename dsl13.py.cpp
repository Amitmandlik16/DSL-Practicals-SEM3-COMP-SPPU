#include <iostream>
using namespace std;

#define max 50
class stack
{
    char arr[max];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(char x);
    void pop(char x);
    void display();
    void isempty();
};
void stack::push(char x)
{
    if(top==max-1)
    {
        cout<<"stack overflow";
    }
    else
    {
        top++;
        arr[top]=x;
    }
}
void stack::display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<arr[i];
    }
}
void stack::pop(char x)
{
    if((x==')' && arr[top]=='(') or (x==']' && arr[top]=='[') or ( x=='}' && arr[top]=='{'))
    {
        top--;
    }
    else if((x==')' && arr[top]!='(') or (x==']' && arr[top]!='[') or ( x=='}' && arr[top]!='{'))
    {
        cout<<"\n string is not well parenthesized";
        exit(0);
    }
}
void stack::isempty()
{
    if(top==-1)
    {
        cout<<"\n string is well parenthesized";
    }
    else
    {
        cout<<"\n string is not well parenthesized"; 
    }
}
int main()
{
    stack s1;
    string s;
    char x;
    getline(cin,s);
    cout<<"your input is"<<s;
    int i=0;
    while(s[i]!='\0')
    {
        x=s[i];
        if((x=='(') or (x=='[') or (x=='{'))
        {
            s1.push(x);
        }    
        if((x==')') or (x==']') or (x=='}'))
        {
            s1.pop(x);
        }
        i++;
    }
    s1.display();
    s1.isempty();
    return 0;
}