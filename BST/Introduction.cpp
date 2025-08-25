#include<iostream>
using namespace std;

// Tree node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Insert into BST
Node* insertintoBST(Node* root, int data) {
    if (root == NULL) {
        root = new Node(data);
        return root;
    }

    if (data < root->data) {
        root->left = insertintoBST(root->left, data);
    } else {
        root->right = insertintoBST(root->right, data);
    }

    return root; // IMPORTANT
}

// Preorder traversal
void preOrder(Node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// Take input from user
void takeInput(Node* &root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertintoBST(root, data);
        cin >> data;
    }
}

// Main function
int main() {
    Node* root = NULL;
    cout << "Enter the data for nodes (-1 to stop): " << endl;
    takeInput(root);

    cout << "Preorder traversal: ";
    preOrder(root);
    cout << endl;

    return 0;
}
