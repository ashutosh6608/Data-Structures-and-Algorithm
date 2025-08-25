#include<iostream>
#include<queue>
#include<climits>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        this->left = NULL;
        this -> right = NULL;
    }
};

class NodeData{
    public:
    int size;
    int minVal;
    int maxVal;
    bool validBST;
    NodeData(){

    }
    NodeData(int size, int max, int min, bool valid){
        this->size = size;
        minVal = min;
        maxVal = max;
        validBST = valid;
    }
};

NodeData findLargestBST(Node* root, int &ans){
    // base case
    if( root == NULL){
        NodeData temp (0, INT_MIN, INT_MAX, true);
        return temp;
    }

    // left subtree
    NodeData leftAns = findLargestBST(root->left, ans);

    // right subtree
    NodeData rightAns = findLargestBST(root->right, ans);

    // checking starts here
    NodeData currNode;
    currNode.size = leftAns.size + rightAns.size + 1;
    currNode.maxVal = max(root->data , rightAns.maxVal);
    currNode.minVal = min(root->data, leftAns.minVal);

    if(leftAns.validBST && rightAns.validBST && 
       (root->data > leftAns.maxVal && root->data < rightAns.minVal)){
        currNode.validBST = true;
    }
    else{
        currNode.validBST = false;
    }

    if(currNode.validBST){
        ans = max(ans,currNode.size);
    }
    return currNode;
}



int main(){
    Node* root = new Node(5);
    Node* first = new Node(2);
    Node* second = new Node(9);
    Node* third = new Node(1);
    Node* fourth = new Node(11);
    root->left = first;
    root->right = second;
    first->left = third;
    second->right = fourth;
    int ans = 0;
    findLargestBST(root,ans);
    cout<<"Largest BST size = "<<ans<<endl;
    return 0;
}