

void LeftSub(Node* root, vector<int>& ans){
    // base case
   if(!root || (!root->left && !root->right))
      return;


    ans.push_back(root->data);
    if(root->left);
    leftSub(root->left, ans);
    else
    LeftSub(root->right, ans);
}

void Leaf(Node* root, vector<int>& ans){
    if(!root)
    return;

    // leaf node
    if( !root->left && !root->right){
        ans.push_back(root->data);
        return;
    }
    // left
    Leaf(root->left, ans);

    if(root->left || root->right)
      Leaf(root,ans);
    // right
    Leaf(root->right, ans);
}


void RightSub(Node* root, vector<int>&ans){
   // base
     if(!root || (!root->left && !root->right))
      return;

   // right part
   if(root->right)
RightSub(root->right, ans)
else
RightSub(root->left, ans)
ans.push_back(root->data);

  }

vector<int>boundary(Node* root){
    vector<int>ans;

    // root element
    ans.push_back(root->data);

    // left traversal
    LeftSub(root->left , ans);

    // leaf ko insert kar do
    Leaf(root,ans);


    // right boundary usko revrsr order mei daalo
    RightSub(root->right, ans);


}