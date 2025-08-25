
#include<iostream>
#include<vector>
#include<stack>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this-> data = data;
        this-> left = NULL;
        this->right = NULL;
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

void inOrder(Node* root, vector<int>&ans){
    if(!root)
    return;

    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);
}


int twoSum( vector<int>&arr, int target){
        int s = 0;
        int e = arr.size()-1;
        
    while(s<e){
        if (arr[s] + arr[e] == target){
            return 1;
        }
        else if(arr[s] + arr[e] > target){
               e--;
        }
        else {
            s++;
        }
    }
      return -1;
} 

int main(){
    Node*  root = NULL;
    root = insertintoBST(root,20);
    root = insertintoBST(root, 10);
    root = insertintoBST(root, 40);
    root = insertintoBST(root, 5);
    root = insertintoBST(root, 15);


   int target = 30; 
   vector<int>arr;

   inOrder(root,arr);

    int ans = twoSum(arr , target);
    if(ans == 1)
        cout << "Pair exists for target = " << target << endl;
    else
        cout << "No pair exists for target = " << target << endl;

    return 0;
   
}


