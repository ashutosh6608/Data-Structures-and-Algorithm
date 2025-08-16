


//// PREORDER ////
// nlr //

vector<int>PreOrder(Node* root){
    stack<Node*>st;
    st.push(root);
    vector<int>ans;
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->data);
        // RIGHT
        if(temp->right)
        s.push(temp->right);
        if(temp->left)
        s.push(temp->left);
    }
    return ans;
}


// POST ORDER
// lrn //

vector<int>PostOrder(Node* root){
    stack<Node*>st;
    st.push(root);
    vector<int>ans;
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        if(temp->left)
        ans.push_back(temp->left);
        if(temp->right)
        ans.push(temp->right);
    }

    reverse(ans.begin(), ans.end());

    return ans;

}

// INORDER ///
// LNR ///
vector<int>inOrder(Node*root){
    stack<Node*>st;
    
    st.push()
}
 