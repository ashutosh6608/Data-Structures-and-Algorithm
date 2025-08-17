 

int find(int in[], int target, int start, int end){
    for( int i = start; i <= end; i++){
        if( in[i] == target)
        return i;
    }
    return  -1;
}


Node* Tree(int in[], int pre[], int Instart, int InEnd, int index){

    // index = preOrder starting
    if(Instart > InEnd)
    return NULL;

    Node* root = new Node(pre[index]);
    int pos = find(in, pre[index], Instart , Inend);

    // left
    root->left = Tree(in, pre, InStart, pos-1, index+1);

    // right
    root->left = Tree(in, pre, pos+1 , InEnd, index+(pos - Instart) + 1 );

    return root;
    
}




Node* buildTree(int in[], int pre[], int n){

    return Tree(in , pre, 0, n-1, 0)

 }