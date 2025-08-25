#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        Node* left = NULL;
        Node* right = NULL;
    }
};


void convertDLLtoBST(Node* &head, int n){
    if(head == NULL || n <= 0){
        return NULL;
    }
    Node* leftSubtree =  convertDLLtoBST(head, n-1-n/2);

    Node* root = head;

    root->left  = leftSubtree;
    head = head->right;

    Node* rightSubtree =  convertDLLtoBST(head, n/2);
    return root;

}

