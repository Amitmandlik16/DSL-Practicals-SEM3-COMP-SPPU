#include <iostream>
using namespace std;

class stack
{
    char str[40];
    int top;
    public:
    stack()
        {
            top=-1;
        }
    void push(char x);
    void pop(char x);
    void checkempty();
};
    void stack::push(char x)
        {
            top++;
            str[top]=x;
        }
    void stack::pop(char x)
        {
            char a=str[top];
            if (x==')' && a=='(')
                top--;
            else if (x==']' && a=='[')
                top--;
            else if (x=='}' && a=='{')
                top--;
        }
    void stack::checkempty()
        {
            if (top==-1)
                {
                    cout<<"expression is well parenthesized";
                }
            else
                {
                    cout<<"expression is not well parenthesized";
                }
        }
int main()
    {
        stack s1;
        char string[40];
        cout<<"Enter the string =";
        cin>>string;
        for(int i=0;string[i]!='\0';i++)
            {
                if(string[i]=='(' || string[i]=='[' || string[i]=='{')
                    {
                        s1.push(string[i]);
                    }
                else if(string[i]==')' || string[i]==']' || string[i]=='}')
                    {
                        s1.pop(string[i]);
                    }
            }
        s1.checkempty();
        return 0;
    }