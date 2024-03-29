int solve(BinaryTreeNode<int>* root, int &i, int k){
    //base case
    if(root == NULL){
        return -1;
    }//Inorder - LNR since it is sorted, we increment i when a node is found
    
    //L
    int left = solve(root->left, i,k);
    if(left != -1){
        return left;
    }
    //N
    i++;
    if(i==k)
        return root->data;
    //R
    return solve(root->right, i,k);    
}
int kthSmallest(BinaryTreeNode<int>* root, int k) {
    int i =0;
    int ans = solve(root, i, k);
    return ans;
}