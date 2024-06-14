#include <iostream>
using namespace std;

struct node
{
  node *prev, *next;
  int data;
};
class dll
{
  node *head = NULL, *temp, *nnode, *newlast;
public:
  void creation ();
  void display ();
  void insertion ();
  void deletionf ();
};
void
dll::creation ()
{
  int n;
  cout << "how many no of data you want to create doubly linked list :";
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      nnode = new node;
      nnode->next = NULL;
      nnode->prev = NULL;
      cout << "Enter data =";
      cin >> nnode->data;
      if (head == NULL)
	{
	  head = nnode;
	}
      else
	{
	  temp->next = nnode;
	  nnode->prev = temp;
	}
      temp = nnode;
    }
}

void
dll::display ()
{
  temp = head;
  cout << temp->data << "\t";
  while (temp->next != NULL)
    {
      temp = temp->next;
      cout << temp->data << "\t";
    }
}

void
dll::deletionf ()
{
  temp = head;
  head = head->next;
  head->prev = NULL;
  delete temp;
}

void
dll::deletionl ()
{
  temp = head;
  while (temp->next != NULL)
    {
      temp = temp->next;
    }
  newlast = temp->prev;
newlast->next = NULL:
  delete temp;
}

void
dll::deletions ()
{
  int data;
  temp = head;
  cout < "Enter data which node is to deleted";
  cout << "data";
  while (temp->data != data)
    {
      temp = temp->next;
    }
  newlast = temp->prev;
newlast->next = NULL:
  delete temp;
}

int
main ()
{
  dll d1;
  d1.creation ();
  d1.display ();
  return 0;
}
