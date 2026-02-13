// Tree Traversal In Spiral Form
#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

struct Node
{
      int key;
      Node *left;
      Node *right;

      Node(int val)
      {
            key = val;
            left = NULL;
            right = NULL;
      }
};

void TreeTraversalInSpiralForm(Node *root)
{
      if (root == NULL)
            return;

      queue<Node *> q;
      stack<int> s;

      bool reverse = false;
      q.push(root);

      while (!q.empty())
      {
            int count = q.size();

            for (int i = 0; i < count; i++)
            {
                  Node *curr = q.front();
                  q.pop();

                  if (reverse)
                        s.push(curr->key);
                  else
                        cout << curr->key << " ";

                  if (curr->left != NULL)
                        q.push(curr->left);

                  if (curr->right != NULL)
                        q.push(curr->right);
            }

            if (reverse)
            {
                  while (!s.empty())
                  {
                        cout << s.top() << " ";
                        s.pop();
                  }
            }

            reverse = !reverse;
            cout << endl;
      }
}

int main()
{

      Node *root = new Node(1);
      root->left = new Node(2);
      root->right = new Node(3);
      root->left->left = new Node(4);
      root->left->right = new Node(5);
      root->left->left->left = new Node(8);
      root->left->left->right = new Node(9);
      root->right->right = new Node(7);
      root->right->left = new Node(6);
      root->right->left->left = new Node(10);

      TreeTraversalInSpiralForm(root);

      return 0;
}
