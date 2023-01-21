void inorder(TreeNode<int>* root, vector<int> &in){
    if(root == NULL)
        return;
    //inorder - L N R
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}

TreeNode<int>* flatten(TreeNode<int>* root)
{
    vector<int> inorderVal;
    //store inorder -> sorted val
    inorder(root, inorderVal);
    int n = inorderVal.size();
    
    //ist step -> make a new node and store the inoder traversal
    //make new node from start
    TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]); 
    //ptr at newnode
    TreeNode<int>* curr = newRoot;
    
    //2nd step -> node bana ke left ko null pt & right ko next node pt
    for(int i=1; i<n; i++){
        //node created 
        TreeNode<int>* temp = new TreeNode<int>(inorderVal[i]);
        
        curr ->left = NULL;
        curr->right = temp;
        curr = temp;
    }
    //3rd step -> last node ke left && right are null
    curr -> left = NULL;
    curr ->right = NULL;
    
    return newRoot;
}
