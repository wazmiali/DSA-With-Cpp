#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {

public:

    void LeftBoundary(Node* root, vector<int> & ans)
    {
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL)
            return;

        ans.push_back(root->data);

        if(root->left != NULL)
            LeftBoundary(root->left, ans);
        else
            LeftBoundary(root->right, ans);
    }

    void LeafBoundary(Node* root, vector<int>& ans)
    {
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL)
            ans.push_back(root->data);

        LeafBoundary(root->left, ans);
        LeafBoundary(root->right, ans);
    }

    void RightBoundary(Node* root, vector<int>& ans)
    {
        if(root == NULL) return;

        if(root->left == NULL && root->right == NULL)
            return;

        if(root->right != NULL)
            RightBoundary(root->right, ans);
        else
            RightBoundary(root->left, ans);

        ans.push_back(root->data);
    }

    vector<int> boundary(Node* root)
    {
        vector<int> ans;
        if(root == NULL) return ans;

        ans.push_back(root->data);

        LeftBoundary(root->left, ans);
        LeafBoundary(root, ans);
        RightBoundary(root->right, ans);

        return ans;
    }
};

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);
    root->right->right = new Node(6);
    root->right->right->left = new Node(9);

    Solution obj;
    vector<int> result = obj.boundary(root);

    for(int x : result)
        cout << x << " ";

    return 0;
}
