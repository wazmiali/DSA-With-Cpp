// Maximum in Binary Tree
#include <iostream>
#include <algorithm>
#include <climits>

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

int getMax(Node* root)
{
    if (root == NULL)
        return INT_MIN;  

    return max(root->data,
               max(getMax(root->left),
                   getMax(root->right)));
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Maximum in tree: " << getMax(root);

    return 0;
}