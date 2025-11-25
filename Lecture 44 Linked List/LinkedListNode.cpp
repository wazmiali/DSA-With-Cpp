// Insertion at any position
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at head
void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at tail
void InsertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Print linked list
void print(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at any position
void InsertAtPosition(Node* &tail, Node* &head, int position, int d) {

    // Insert at start
    if (position == 1) {
        InsertAtHead(head, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    // Reach (position - 1)
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // Insert at last
    if (temp->next == NULL) {
        InsertAtTail(tail, d);
        return;
    }

    // Insert in middle
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main() {

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;

    print(head);

    InsertAtTail(tail, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 1, 22);
    print(head);

    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;

    return 0;
}

