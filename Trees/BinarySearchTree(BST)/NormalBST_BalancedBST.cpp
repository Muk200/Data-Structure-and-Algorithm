void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL)
        return ;
    //inorder - L N R
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

//inorder to tree formation
TreeNode<int>* inorderToBST(int s, int e, vector<int> &inorderVal){
    //base case
    if(s>e)
        return NULL;
    
    //take mid and make node for that
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(inorderVal[mid]);
    
    //in left -> all left of mid && in right -> all right of mid
    root->left = inorderToBST(s, mid-1, inorderVal);
    root->right = inorderToBST(mid+1, e, inorderVal);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    
    vector<int> inorderVal;
    //store inorder -> sorted val
    inorder(root, inorderVal);
    
    return inorderToBST(0, inorderVal.size() -1, inorderVal);
}
