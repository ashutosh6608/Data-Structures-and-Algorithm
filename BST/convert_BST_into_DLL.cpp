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
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertintoBST(Node* root, int data){
    if( root == NULL){
        root = new Node(data);
        return root;
    }

    if( root-> data > data){
        root->left = insertintoBST(root->left, data);
    }
    else {
        root->right = insertintoBST(root->right,data);
    }
    return root;
}

// void takeInput(Node* &root){
//     int data;
//     cin >> data;
//     while(data != -1){
//         root = insertintoBST(root->data);
//         cin >> data;
//     }
// }

void convertToDLL(Node* root, Node* &head){
    if( root == NULL){
        return;
    }
   convertToDLL(root->right, head);
// Attach the root node to right linked list
    root->right  = head;
 // Attaching previous pointer
    if(head != NULL)
    head->left = root;
   // Update head
    head = root;
    // Convert left subtree to linked list
    convertToDLL(root->left,head);
}

void printDLL(Node* head){
    cout << "Doubly linked list:";
    while(head != NULL){
        cout << head->data << " ";
        head = head->right;
        }
        cout << endl;
}

int main(){

    Node* root = NULL;
    root = insertintoBST(root,90);
    insertintoBST(root, 110);
    insertintoBST(root, 70);
    insertintoBST(root, 80);
    insertintoBST(root, 130);
    insertintoBST(root, 100);
    insertintoBST(root, 60);
   
    insertintoBST(root, 50);
    insertintoBST(root, 40);
    insertintoBST(root, 65);
    
    insertintoBST(root, 95);
    insertintoBST(root, 105);
    insertintoBST(root, 125);
    insertintoBST(root, 135);

        


    Node* head = NULL;
    convertToDLL(root, head);
    printDLL(head);
    return 0;

}