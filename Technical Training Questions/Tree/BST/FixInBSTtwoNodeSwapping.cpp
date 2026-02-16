// Fix in BST with Two Node Swapping
#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int x) {
        key = x;
        left = right = NULL;
    }
};
Node* prevNode = NULL;
Node* first = NULL;
Node* second = NULL;

// Inorder traversal to detect swapped nodes
void fixBST(Node* root)
{
    if (root == NULL) return;

    fixBST(root->left);

    if (prevNode != NULL && root->key < prevNode->key) {
        if (first == NULL)
            first = prevNode;
        second = root;
    }

    prevNode = root;

    fixBST(root->right);
}

// Function to correct BST
void correctBST(Node* root)
{
    prevNode = first = second = NULL;
    fixBST(root);

    if (first != NULL && second != NULL)
        swap(first->key, second->key);
}

// Inorder traversal (for checking)
void inorder(Node* root)
{
    if (root == NULL) return;

    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

int main()
{
    Node* root = new Node(80);
    root->left = new Node(60);
    root->right = new Node(70);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->right->left = new Node(8);
    root->right->right = new Node(80);

    cout << "Inorder before fix: ";
    inorder(root);
    cout << endl;

    correctBST(root);

    cout << "Inorder after fix: ";
    inorder(root);
    cout << endl;

    return 0;
}
