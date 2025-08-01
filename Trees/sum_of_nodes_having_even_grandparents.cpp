#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    };

    int EvenGrandParentSum(Node* root, Node* parent, Node* grandParent){
        if(root == NULL){
            return 0;
        }
       int sum = 0;
        if(grandParent != NULL && grandParent->data % 2 == 0){
         sum +=  root->data;
        }
        sum += EvenGrandParentSum(root->left, root, parent);
        sum += EvenGrandParentSum(root->right, root, parent);
        return sum;
    };


int main() {
    Node* root = new Node(24);
    root -> left = new Node(4);
    root -> right = new Node(7);
    root->left->left = new Node(9);
    root->left->right = new Node(5);
    root->right -> left = new Node(8);
    root->right->right = new Node(10);
    root->left->left->left = new Node(9);
    

    int sum = EvenGrandParentSum(root, NULL, NULL);
    cout << "Sum is " << sum << endl;
}