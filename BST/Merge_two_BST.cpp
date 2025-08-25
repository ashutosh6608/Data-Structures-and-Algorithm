#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// Insert into BST
Node* insertintoBST(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    if (root->data > data) {
        root->left = insertintoBST(root->left, data);
    } else {
        root->right = insertintoBST(root->right, data);
    }
    return root;
}

// Create BST from input
Node* createBST() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    Node* root = NULL;
    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        root = insertintoBST(root, x);
    }
    return root;
}

// Convert BST to DLL
void converttoDLL(Node* root, Node* &head) {
    if (root == NULL) return;

    converttoDLL(root->right, head);

    root->right = head;
    if (head != NULL) {
        head->left = root;
    }
    head = root;

    converttoDLL(root->left, head);
}

// Merge two sorted DLLs
Node* mergeSortedLinkedList(Node* head1, Node* head2) {
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1;

    Node* head = NULL;
    Node* tail = NULL;

    while (head1 && head2) {
        Node* smaller;
        if (head1->data < head2->data) {
            smaller = head1;
            head1 = head1->right;
        } else {
            smaller = head2;
            head2 = head2->right;
        }

        if (head == NULL) {
            head = tail = smaller;
        } else {
            tail->right = smaller;
            smaller->left = tail;
            tail = smaller;
        }
    }

    if (head1) { tail->right = head1; head1->left = tail; }
    if (head2) { tail->right = head2; head2->left = tail; }

    return head;
}

// Count DLL nodes
int countNodes(Node* head) {
    int cnt = 0;
    while (head) {
        cnt++;
        head = head->right;
    }
    return cnt;
}

// DLL to Balanced BST
Node* dllintoBST(Node* &head, int n) {
    if (n <= 0 || head == NULL) return NULL;

    Node* leftSub = dllintoBST(head, n/2);

    Node* root = head;
    root->left = leftSub;

    head = head->right;

    root->right = dllintoBST(head, n - n/2 - 1);

    return root;
}

// Merge two BSTs
Node* mergeBSTs(Node* root1, Node* root2) {
    Node* head1 = NULL;
    converttoDLL(root1, head1);

    Node* head2 = NULL;
    converttoDLL(root2, head2);

    Node* mergedDLL = mergeSortedLinkedList(head1, head2);

    int n = countNodes(mergedDLL);
    return dllintoBST(mergedDLL, n);
}

// Inorder Traversal
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Main
int main() {
    cout << "Create BST 1:\n";
    Node* root1 = createBST();

    cout << "Create BST 2:\n";
    Node* root2 = createBST();

    Node* mergedRoot = mergeBSTs(root1, root2);

    cout << "\nInorder of merged BST: ";
    inorder(mergedRoot);

    return 0;
}
