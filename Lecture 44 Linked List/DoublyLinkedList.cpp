#include <iostream>
using namespace std;

class Node
{
public:
      int data;
      Node *prev;
      Node *next;

      // constructor
      Node(int d)
      {
            this->data = d;
            this->prev = NULL;
            this->next = NULL;
      }
};

// Traversing a linked list
void print(Node *head)
{
      Node *temp = head;

      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
      cout << endl;
}
// Give the length of linked list
int getLength(Node *head)
{
      int len = 0;
      Node *temp = head;

      while (temp != NULL)
      {
            len++;
            temp = temp->next;
      }
      return len;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{

      if (head == NULL)
      {
            Node *temp = new Node(d);
            head = temp;
            tail = temp;
      }
      else
      {
            Node *temp = new Node(d);
            temp->next = head;
            temp->prev = head;
            head = temp;
      }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
      cout<<"tail "<< tail <<endl;

      if (tail == NULL)
      {
            Node *temp = new Node(d);
            tail = temp;
            head = temp;
      }
      else
      {
            Node *temp = new Node(d);
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
      }
}

void insertAtHead(Node *&head, int d)
{

      Node *temp = new Node(d);
      temp->next = head;
      head->prev = temp;
      head = temp;
}

// Insert at any position
void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{

      // Insert at start
      if (position == 1)
      {
            insertAtHead(head, tail, d);
            return;
      }

      Node *temp = head;
      int cnt = 1;

      // Reach (position - 1)
      while (cnt < position - 1)
      {
            temp = temp->next;
            cnt++;
      }

      // Insert at last
      if (temp->next == NULL)
      {
            insertAtTail(tail, head, d);
            return;
      }

      // Insert in middle
      Node *nodeToInsert = new Node(d);
      nodeToInsert->next = temp->next;
      temp->next->prev = nodeToInsert;
      temp->next = nodeToInsert;
      nodeToInsert->prev = temp;
}

int main()
{
      Node* head = NULL;
      Node* tail = NULL;

      // Node *node1 = new Node(10);
      // Node *head = node1;
      // Node *tail = node1;

      print(head);

      // cout<< getLength(head) <<endl;

      insertAtHead(tail, head, 11);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      insertAtHead(tail, head, 13);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      insertAtHead(tail, head, 8);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      insertAtTail(tail, head, 25);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      InsertAtPosition(tail, head, 2, 100);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      InsertAtPosition(tail, head, 1, 101);
      print(head);

      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      InsertAtPosition(tail, head, 7, 102);
      print(head);
      cout << "head: " << head->data << endl;
      cout << "tail: " << tail->data << endl;

      return 0;
}
