#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree() {
    int value;
    cin >> value;

    if (value == -1)
        return nullptr;

    Node* root = new Node(value);
    root->left = createTree();
    root->right = createTree();

    return root;
}

int main() {
    cout << "Enter tree values (-1 for NULL): ";
    Node* root = createTree();

    cout << "Tree created successfully." << endl;
    return 0;
}
