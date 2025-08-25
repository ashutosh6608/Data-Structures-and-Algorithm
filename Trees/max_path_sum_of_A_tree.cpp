
int PathSum(Node* root, int &sum){
    if(!root)
    return 0;

    // leaf Node
    if(!root->left && !root->right)
        return root->data;
    
    int left = PathSum(root->left, sum);
    int right = PathSum(root->right, sum);

    // right child

    if( root->right){
        return (root->data + right);
    }

      /// right child
     if(root->left ){
        return (root->data + left);
    }

    // both child
    if(root->left && root->right){
        sum =   max(sum, root->data+left+right);
        return root->data + max(left,right)
    }
}




int maxPathSum(Node* root){
    // code here
    int sum = INT_MIN;
    int val =  PathSum(root, sum);
   // root node is special node
    if(root->left && root->right)
    return sum;

    return max(sum,val);
}