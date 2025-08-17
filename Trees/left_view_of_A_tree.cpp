vector<int> leftView(TreeNode* root) {
    vector<int> ans;
    if (!root) return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        // first element of this level is part of left view
        ans.push_back(q.front()->data);
        int n = q.size();

        while (n--) {
            TreeNode* temp = q.front();
            q.pop();

            if (temp->left) q.push(temp->left);
            if (temp->right) q.push(temp->right);
        }
    }
    return ans;
}



// ALITER

void Lview(Node*root, int level , vector<int>&ans){
    if(!root)
    return;

    if(level == ans.size())
    ans.push_back(root->val);
    Lview(root->left, level+1, ans);
    Lview(root->right, level+1, ans);
}

vector<int>leftView(Node* root){
    vector<int>ans;
    if(!root)
    return ans;

   Lview(root, 0, ans);
   return ans;
}