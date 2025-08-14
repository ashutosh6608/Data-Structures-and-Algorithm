#include <iostream>
#include<queue>
#include<vector>
#include<stack>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
                                       

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};


void inorder(Node* root){
    if( root == NULL)
    return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postOrder(Node* root){
    if(root == NULL)
    return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root -> data << " ";
}

void preOrder(Node* root){
    if(root == NULL)
    return;
     cout << root -> data << " ";
    preOrder(root->left);
    preOrder(root->right);
       
}

vector<int>levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    Node* temp;   

    while(!q.empty()){
        temp = q.front();
        q.pop();

        ans.push_back(temp->data);

        // left side
        if(temp->left)
        q.push(temp->left);

        if( temp -> right)
        q.push(temp->right);
    }
    return ans;
}

int size(Node* root){
    
    if(root == NULL)
    return 0;

    return (1+ size(root->left) + size(root->right));

}

int totalSum(Node*root){
    if(root == NULL)
    return 0;
   
   return ( root->value + totalSum(root->left) + totalSum(root->right));
  
}

int height(Node* root){
    if( root == NUll)
      return 0;

      return ( 1+ max(height(root->left) , height(root->right)));
}

void countLeaf(Node* root, int &count){
    if( root == NULL)
    return;
    if( !root->left & !root->right){
        count++;
        return;
    }
     countleaf(root->left, count);
     countLeaf(root->right, count);
  }

Node* BinaryTree() {
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    Node* temp = new Node(x);

    cout << "Enter left of " << x << ": ";
    temp->left = BinaryTree();

    cout << "Enter right of " << x << ": ";
    temp->right = BinaryTree();

    return temp;
}

int main() {
    cout << "Enter the root node (-1 for NULL): ";
    Node* root = BinaryTree();
    cout << "Inorder: ";
    inorder(root);
    cout << "\nPostOrder: ";
   postOrder(root);

   cout << "\nPreOrder: ";
    preOrder(root);

    vector<int>result = levelOrder(root);
    cout << "\nLevelOrder: ";
    for (int val : result) {
        cout << val << " ";
    }

    return 0; 
}
