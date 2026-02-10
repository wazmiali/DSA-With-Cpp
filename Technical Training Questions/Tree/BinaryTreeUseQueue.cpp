#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
      int data;
      Node *left;
      Node *right;

      Node(int d)
      {
            data = d;
            left = NULL;
            right = NULL;
      }
};

Node *buildTree(Node *root)
{
      cout << "Enter the data: " << endl;
      int data;
      cin >> data;

      if (data == -1)
            return NULL;

      root = new Node(data);

      cout << "Enter data for inserting in left of " << data << endl;
      root->left = buildTree(root->left);

      cout << "Enter data for inserting in right of " << data << endl;
      root->right = buildTree(root->right);

      return root;
}

void levelOrderTraversal(Node *root)
{
      if (root == NULL)
            return;

      queue<Node *> q;
      q.push(root);
      q.push(NULL);

      while (!q.empty())
      {
            Node *temp = q.front();
            q.pop();

            if (temp == NULL)
            { // purana level complete traverse ho chuka hai
                  cout << endl;
                  if (!q.empty())
                  { // queue still has same child nodes
                        q.push(NULL);
                  }
            }
            else
            {
                  cout << temp->data << " ";
                  if (temp->left)
                        q.push(temp->left);

                  if (temp->right)
                        q.push(temp->right);
            }
      }
}

int main()
{
      Node *root = NULL;

      // creating a tree
      root = buildTree(root);

      // example input:
      // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

      // level order traversal

      cout << "Printing the level order tracersal output. " << endl;
      levelOrderTraversal(root);

      return 0;
}
