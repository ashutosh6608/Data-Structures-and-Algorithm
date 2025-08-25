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

int findPredecessor(Node* root, int target){
    Node* curr = root;
    int pred = INT_MIN;

    while(curr){
        if(curr->data == target){
            if(curr->left)
            return findMax(curr->left);
            break;
        }
        else if(target < curr->data){
            curr = curr->left;
        }
        else {
            pred = curr->data;
            curr = curr->right;
        }
    }
    return pred;
}
int findSuccessor(Node* root, int target){
    Node* curr = root;
    int succ = INT_MAX;

    while(curr){
        if(curr-> data == target){
        if(curr->right)
        return findMin(curr->right);
        break;
        }
        else if(target < curr->data){
            succ = curr->data;
            curr = curr->left;
        }
        else {
         
          curr = curr->right;
        }
    }
    return succ;
}


int main(){
    Node*  root = NULL;
    root = insertintoBST(root,20);
     root = insertintoBST(root, 10);
    root = insertintoBST(root, 30);
    root = insertintoBST(root, 5);
    root = insertintoBST(root, 15);

    int target = 10;
    int pred = findPredecessor(root,target);

    if(pred == INT_MIN)
    cout << "No predecessor\n";
    else
    cout << "Predecessor of " << target << " is " << pred << endl;

    
    int succ = findSuccessor(root,target);

    if(succ == INT_MAX)
    cout << "No successsor\n";
    else
    cout << "Succecessor of " << target << " is " << succ << endl;

    return 0;
}