
bool parent(Node* root, int a, int b){
    if( root == NULL){
        return false;
    }

    if (root->left && root-> right){
        if( root->left->data == a && root->right->data == b ){
      return true;
   }
   if(root->left->data == b && root->right->data == a){
    return true;
   }
    }
   

   return (parent(root->left, a, b) || parent(root->right, a, b));
}


bool isCousin(Node* root, int a , int b){
    queue<Node*>q;

    q.push(root);
    int l1 = -1;
    int l2 = -1;
    int level = 0;

    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* temp = q.front();
            q.pop();
            if( temp ->data == a)
            l1 = level;
            if(temp-> data == b)
            l2 = level;

            if(temp -> left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
        level++;
        if(l1 != l2) // same level p nhi hai
        return 0;

        if(l1 != -1 && l2 != -1)
        break;
    }


    // parent
    return !parent(root,a,b);
}