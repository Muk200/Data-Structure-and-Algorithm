void solve(Node* root, int &k, int node){
    
    //base case
    if(root == NULL)
        return NULL;
    
    if(root->data == node)
        return root;
    
    int leftAns = solve(root->left, k, node);
    int rightAns = solve(root->right, k, node);
    
    //wapis aate time
    if(leftAns != NULL && rightAns == NULL){
        
        k--;
        
        if(k<=0){ //k= INT_MAX -> so that after decremntation of k it won't reach 0(ans has been locked)
            k = INT_MAX;
            return root;
        }
        
        return leftAns;
    }
    
    if(leftAns == NULL && rightAns != NULL){
        
        k--;
        
        if(k<=0){ //k= INT_MAX -> so that after decremntation of k it won't reach 0(ans has been locked)
            k = INT_MAX;
            return root;
        }
        
        return rightAns;
    }
    
    return NULL;
}

int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root, k, node);
    
    if(ans == NULL || ans->data == node) //this 2nd case is important 
        return -1;
    else
        return ans->data;
}