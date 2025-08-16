int height1 (Node* root, bool& valid){
        if(!root)
        return 0;
        
        int L = height(root->left , valid);
        int R = height(root->right, valid);
        
        if(abs(L-R) > 1)
        valid = 0;
        
        return 1 + max(L,R);
    }
    bool isBalanced(Node* root) {
        // Code here
        bool valid = 1;
        height(root,valid);
        return valid;
       
    }