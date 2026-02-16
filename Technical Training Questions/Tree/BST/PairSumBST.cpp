// Pair with given sum in BST
#include <iostream>
#include <unordered_set>
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

bool PairSum(Node *root, int sum, unordered_set<int> &s)
{
      if (root == NULL)
            return false;

      if (PairSum(root->left, sum, s))
            return true;

      if (s.find(sum - root->key) != s.end())
            return true;
      else
            s.insert(root->key);

      return PairSum(root->right, sum, s);
}

int main()
{
      Node *root = new Node(10);
      root->left = new Node(4);
      root->right = new Node(20);
      root->left->left = new Node(2);
      root->left->right = new Node(9);
      root->right->left = new Node(11);
      root->right->right = new Node(30);

      int sum = 31;
      unordered_set<int> s;

      if (PairSum(root, sum, s))
            cout << "Pair Found" << endl;
      else
            cout << "No Pair Found" << endl;

      return 0;
}
