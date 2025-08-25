bool isPresent(Node* root , &target){
    if(root == NULL)
    return false;

    if(root->data == target)
        return true;

        bool leftAns = false;
        bool rightAns = false; 

    if(root->data > target){
      leftAns = isPresent(root->left, target);
    }    

    if(root->data < target){
        rightAns = isPresent(Root->left, target);
    }
       return leftAns || rightAns ;
}