
Node* bstUsingInorder(int inorder[], int s, int e){
    // base case
    if( s > e){
        return NULL;
    }

    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = bstUsingInorder(inorder, s, mid-1);
    root->right = bstUsingInorder(inorder,mid+1, e);

   return root;
}

int main(){
     
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s = 0;
    int e = 0;

    Node* root = bstUsingInorder(inorder, s, e);
    levelOrderTraversal(root);
}