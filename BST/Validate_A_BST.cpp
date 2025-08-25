

// Inorder is sorted of a BST

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

bool isValid(Node* root, int lb , int ub){
    if(root == NULL)
    return true;

    if(root->data > lb && root->data < ub){
        bool leftAns = isValid(root->left , lb, root->data);
        bool rightAns = isValid(root->right, root->data , ub );
        return  leftAns && rightAns;
    }
    else {
        return false;
    }
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

     int lb = INT_MIN;
     int ub = INT_MAX;
     if(isValid){
        cout << "Yes this tree is BST" << endl;
     }
     else {
        cout << "No this tree is not a BST " << endl;
     }

    }



