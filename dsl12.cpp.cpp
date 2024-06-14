#include <iostream>
#include <string>
using namespace std;

#define max 50
class stack
{
    int top;
    char arr[max];

public:
    stack()
    {
        top = -1;
    }
    void push(char x);
    void display();
    char pop();
};

void stack::push(char x)
{
    if (top == max - 1)
    {
        cout << "Stack overflow";
    }
    else
    {
        top++;
        arr[top] = x;
    }
}

void stack::display()
{
    cout << "\nReversed string is: ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i];
    }
}

char stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is empty";
        return '\0';
    }
    else
    {
        char x = arr[top];
        top--;
        return x;
    }
}

int main()
{
    stack st;
    char x;
    string s, org, rev;

    cout << "Enter the string to check if it is a palindrome: ";
    getline(cin, s);

    cout << "Original string is: " << s << endl;

    int i = 0;

    while (s[i] != '\0')
    {

        x = s[i];

        if (x >= 'a' && x <= 'z')
        {

            x = static_cast<char>(x - 'a' + 'A');
        }

        if ((x >= 'A' && x <= 'Z'))
        {

            st.push(x);

            org.push_back(x);
        }

        i++;
    }
    cout << "Processed string: " << org << endl;

    st.display();

    i = 0;

    int flag = 1;

    while (org[i] != '\0')
    {

        x = st.pop();

        if (org[i] != x)
        {

            flag = 0;
            break;
        }
        else
        {
            rev.push_back(x);
            i++;
        }
    }
    cout << "\n Final reversed string is " << rev << endl;

    if (flag == 1)
    {

        cout << "Given string is a palindrome" << endl;
    }

    else
    {

        cout << "Given string is not a palindrome" << endl;
    }

    return 0;
}