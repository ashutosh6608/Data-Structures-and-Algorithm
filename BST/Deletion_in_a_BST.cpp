#include<iostream>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this-> right = NULL;
    }
};

Node* insertintoBST(Node* root, int data){
    if(!root) 
        return new Node(data);
    if(data < root-> data)
        root->left = insertintoBST(root->left , data);
    else 
        root->right = insertintoBST(root->right, data);
    return root;
}

int findMax(Node* root){
    while (root->right)
        root = root->right;
    return root->data;
}

int findMin(Node* root){
    while(root->left)
        root = root->left;
    return root->data;
}


void preorder(Node* root){
    if(root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


Node* deleteNode(Node* root , int target){
    if(root == NULL) return root;

    if(target < root->data){
        root->left = deleteNode(root->left, target);
    }
    else if(target > root->data){
        root->right = deleteNode(root->right, target);
    }
    else {
        // Case 1: no child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // Case 2: only right child
        else if(root->left == NULL){
            Node* child = root->right;
            delete root;
            return child;
        }
        // Case 3: only left child
        else if(root->right == NULL){
            Node* child = root->left;
            delete root;
            return child;
        }
        // Case 4: two children
        else {
            int pred = findMax(root->left);   // use predecessor
            root->data = pred;
            root->left = deleteNode(root->left, pred);
        }
    }
    return root;
}

int main(){
    Node* root = NULL;
    root = insertintoBST(root,100);
    root = insertintoBST(root, 50);
    root = insertintoBST(root, 150);
    root = insertintoBST(root, 40);
    root = insertintoBST(root, 60);
    root = insertintoBST(root, 175);
    root = insertintoBST(root, 110);

    cout << "Preorder before deletion: ";
    preorder(root);
    cout << endl;

    root = deleteNode(root,150);

    cout << "Preorder after deletion: ";
    preorder(root);
    cout << endl;

    return 0;
}
