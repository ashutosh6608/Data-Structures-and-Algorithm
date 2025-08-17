
class Solution {
public:
 
  int findPos(vector<int>&inOrder, int Start, int End, int target){
      for ( int i = Start; i <=End; i++ ){
        if(inOrder[i] == target) 
        return i;
      }
      return -1;
}


TreeNode* buildTreeHelper(vector<int>&inOrder, vector<int>&postOrder, int inStart, int inEnd, int& postIndex){
    if(inStart > inEnd) return NULL;

    // create node from preOrder
    TreeNode* root = new TreeNode(postOrder[postIndex--]);

    // if leaf node
    if( inStart == inEnd) return root;

    // find root
    int pos = findPos(inOrder, inStart, inEnd, root->val);

      // build tree
    root->right = buildTreeHelper(inOrder, postOrder, pos+1, inEnd, postIndex);

    // build tree
    root->left = buildTreeHelper(inOrder, postOrder, inStart, pos-1, postIndex);

  

    return root;

}


TreeNode* buildTree(vector<int>&inOrder, vector<int>&postOrder){
    int postIndex = postOrder.size() - 1 ;
    return buildTreeHelper(inOrder, postOrder, 0, inOrder.size()-1, postIndex);

}
};
