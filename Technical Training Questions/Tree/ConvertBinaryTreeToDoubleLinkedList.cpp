// Convert Binary tree to Double Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *previous = NULL;

Node *BinaryTreeToDLL(Node *root)
{
    if (root == NULL)
        return NULL;

    Node *head = BinaryTreeToDLL(root->left);

    if (previous == NULL)
    {
        head = root;
    }
    else
    {
        root->left = previous;
        previous->right = root;
    }

    previous = root;

    BinaryTreeToDLL(root->right);

    return head;
}


void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->right;
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->left->left = new Node(80);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->left = new Node(62);

    Node *head = BinaryTreeToDLL(root); 

    cout << "DLL is: ";
    printDLL(head);

    return 0;
}
