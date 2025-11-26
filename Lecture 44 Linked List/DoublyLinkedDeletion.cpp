#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        int val = this->data;
        if (next != NULL) {
            delete next;
            next = NULL;
        }
        cout << "Memory free for node with data: " << val << endl;
    }
};

// Print Linked List
void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at Head
void insertAtHead(Node *&head, Node *&tail, int d) {
    if (head == NULL) {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// Insert at Tail
void insertAtTail(Node *&tail, Node *&head, int d) {

    if (tail == NULL) {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// Insert at any Position
void InsertAtPosition(Node *&tail, Node *&head, int position, int d) {

    // 1. Insert at first position
    if (position == 1) {
        insertAtHead(head, tail, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    // 2. Traverse to (pos-1)
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // 3. Insert at end
    if (temp->next == NULL) {
        insertAtTail(tail, head, d);
        return;
    }

    // 4. Insert in middle
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

// Delete a Node
void deleteNode(int position, Node *&head, Node *&tail) {

    // Delete head
    if (position == 1) {
        Node *temp = head;
        if (head->next != NULL) {
            head->next->prev = NULL;
        }
        head = head->next;

        temp->next = NULL;
        delete temp;

        if (head == NULL) tail = NULL;
    }
    else {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position && curr != NULL) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // If deleting last node
        if (curr->next == NULL) {
            tail = prev;
        }

        prev->next = curr->next;
        if (curr->next != NULL)
            curr->next->prev = prev;

        curr->next = curr->prev = NULL;
        delete curr;
    }
}

int main() {

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtHead(head, tail, 8);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    InsertAtPosition(tail, head, 2, 100);
    print(head);

    InsertAtPosition(tail, head, 1, 101);
    print(head);

    InsertAtPosition(tail, head, 7, 102);
    print(head);

    deleteNode(6, head, tail);
    print(head);

    return 0;
}
