class info{
    
    public:
    int mini;
    int maxi;
    int size;
    bool isBST;
    
    info(){
        
    }
    info(int a, int b, int c, bool d){
        mini = a;
        maxi = b;
        size = c;
        isBST = d;
    }
};

info solve(TreeNode<int>* root, int &ans){
    
    if(root == NULL){
        return info{INT_MAX, INT_MIN, 0, true};
    }
    
    info leftAns = solve(root->left, ans);
    info rightAns = solve(root->right, ans);
    
    info curr;
    
    curr.size = leftAns.size + rightAns.size + 1;
    curr.mini = min(leftAns.mini, root->data);
    curr.maxi = max(rightAns.maxi, root->data);
    
    //check is bst
    if(leftAns.isBST && rightAns.isBST && (root->data > leftAns.maxi && root->data < rightAns.mini)){
        curr.isBST = true;
    }
    else{
        curr.isBST = false;
    }
    
    //ans update
    if(curr.isBST){
        ans = max(ans, curr.size);
    }
    return curr;
}

int largestBST(TreeNode<int>* root) 
{
    int ans = 0;
    
    info temp = solve(root, ans);
    
    return ans;
}