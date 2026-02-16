// Vertical Sum in a Binary Tree
#include <iostream>
#include <map>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

void verticalSumUtil(Node *root, int hd, map<int, int> &mp)
{
    if (root == NULL)
        return;

    verticalSumUtil(root->left, hd - 1, mp);

    mp[hd] += root->key;

    verticalSumUtil(root->right, hd + 1, mp);
}

void verticalSum(Node *root)
{
    map<int, int> mp;
    verticalSumUtil(root, 0, mp);

    for (auto sum : mp)
    {
        cout << sum.second << " ";
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(40);
    root->left->left = new Node(20);
    root->left->right = new Node(35);
    root->left->right->left = new Node(38);
    root->right->left = new Node(42);
    root->right->right = new Node(45);

    cout << "Vertical Sums are: ";
    verticalSum(root);

    return 0;
}
