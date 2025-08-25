
/////////////////////  INORDER ///////////////////

vector<int>MorrisTraversal(Node* root){

    // left
    // node
    // right
    vector<int>ans;
    while(root){
      // left part does  not exits

      if(!root-> left){
        ans.push_back(root->data);
        root = root->right;
      }

      // left part exists
      else {
        Node* curr = root->left;
        while(curr->right && curr->right != root)
        curr = curr -> right;
      // not traversed
       if( curr -> right == NULL){
        curr -> right = root;
        root = root->left;
      }
       else {    // already traversed
        curr->right = NULL;
        ans.push_back(root->data);
        root = root->right
       }
      }
    }
    return ans;
}



/////////////// PRE ORDER ////////////



vector<int>MorrisTraversal(Node* root){

    // left
    // node
    // right
    vector<int>ans;
    while(root){
      // left part does  not exits

      if(!root-> left){
        ans.push_back(root->data);
        root = root->right;
      }

      // left part exists
      else {
        Node* curr = root->left;
        while(curr->right && curr->right != root)
        curr = curr -> right;
      // not traversed
       if( curr -> right == NULL){
        ans.push_back(root->data);
        curr -> right = root;
        root = root->left;
      }
       else {    // already traversed
        curr->right = NULL;
        root = root->right
       }
      }
    }
    return ans;
}