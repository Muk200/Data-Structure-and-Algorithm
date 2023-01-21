bool searchInBST(BinaryTreeNode<int> *root, int x) {
    //base case
    if(root == NULL){
        return false;
    }
    if(root->data == x){
        return true;
    }
    if(root->data > x){
        //in left part
        return searchInBST(root->left, x);
    }
    else{
        //in right part
        return searchInBST(root->right, x);
    }
}
//T.C = O(N)
//S.C = O(H)