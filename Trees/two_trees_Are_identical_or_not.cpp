#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

bool isIdentical(Node* root1 , Node* root2){
    if( root1 == NULL && root2 == NULL)
    return 1;

    if((!root1 && root2) || (root1 && !root2))
    return 0;

    if( root1-> val != root2->val)
    return 0;

    return isIdentical(root1->left , root2->left) && 
           isIdentical(root1->right, root2->right);
}

int main() {
    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(4);
    root1->left->right = new Node(5);
    root1->right = new Node(3);
    root1->right->left = new Node(6);
    root1->right->right = new Node(7);


     Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right = new Node(9);
    root2->right->left = new Node(6);
    root2->right->right = new Node(7);


    if (isIdentical(root1, root2))
    cout << "The trees are identical." << endl;
    else 
    cout << "The trees are not identical." << endl;

    return 0;
}





