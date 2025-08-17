void Rview(Node*root, int level , vector<int>&ans){
    if(!root)
    return;

    if(level == ans.size())
    ans.push_back(root->val);
    Rview(root->right, level+1, ans);
    Rview(root->left, level+1, ans);
    
}

vector<int>leftView(Node* root){
    vector<int>ans;
    if(!root)
    return ans;

   Rview(root, 0, ans);
   return ans;
}