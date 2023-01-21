//ALGO 
//1. take inoder of bst (since it is sorted)
//2. take a vector to save the inorder & use 2 ptr approach 
//3. sum = val[i] + val[j] && check if sum == ,<, > target

void inorder(BinaryTreeNode<int>* root,vector<int> &in){
    if(root == NULL)
        return;
    //inorder - L N R
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
    
	vector<int> inorderVal;
    //store inorder -> sorted val
    inorder(root, inorderVal); 
    
    int i=0;
    int j= inorderVal.size() - 1;
    
    while(i<j){
        int sum = inorderVal[i] + inorderVal[j];
        
        if(sum == target)
            return true;
        else if(sum > target)
            j --;
        else
            i++;
    }
    return false;
}