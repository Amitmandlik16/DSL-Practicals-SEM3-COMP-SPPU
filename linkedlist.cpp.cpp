#include <iostream>
using namespace std;

struct node
{
  int data;
  node *next;

};
class linkedlist
{
public:
  int data;
  node *head, *tail, *nnode;
  void creation ();
  void display ();
  void insertfirst ();
  void insertatpos ();
  void delfirst ();
  void dellast ();
};
void
linkedlist::creation ()
{
  int n;
  cout << "how many no of data you want to create linked list :";
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      nnode = new node;
      nnode->next = NULL;
      cout << "Enter data =";
      cin >> nnode->data;
      if (head == NULL)
	{
	  head = tail = nnode;
	}
      else
	{
	  tail->next = nnode;
	  tail = nnode;
	}
    }
}

void
linkedlist::display ()
{
  node *temp;
  temp = head;
  cout << "linkedlist is :-" << "\n";
  cout << temp->data << "\t";
  while (temp->next != NULL)
    {
      temp = temp->next;
      cout << temp->data << "\t";
    }
  cout << "\n";
}

void
linkedlist::insertfirst ()
{
  node *temp, *nnode;
  nnode = new node;
  cout << "Enter data you want to add at first position =";
  cin >> nnode->data;
  nnode->next = head;
  head = nnode;
}

void
linkedlist::insertatpos ()
{
  cout << "Enter the number after which you want to add new data :";
  cin >> data;
  node *nnode, *temp;
  nnode = new node;
  cout << "Enter the data you want to add after " << data << " =";
  cin >> nnode->data;
  temp = head;
  while (temp->data != data)
    {
      temp = temp->next;
    }
  nnode->next = temp->next;
  temp->next = nnode;
}

void
linkedlist::delfirst ()
{
  cout << "deletion of first node";
  node *temp;
  temp = head;
  head = head->next;
  delete temp;
}

void
linkedlist::dellast ()
{
  cout << "deletion of last node" << endl;
  node *temp;
  temp = head;
  while (temp->next->next != NULL)
    {
      temp = temp->next;
    }
  temp->next = NULL;
}

int
main ()
{
  linkedlist a;
  a.creation ();
  a.display ();
  a.insertfirst ();
  a.display ();
  a.insertatpos ();
  a.display ();
  a.delfirst ();
  a.display ();
  a.dellast ();
  a.display ();
  return 0;
}
