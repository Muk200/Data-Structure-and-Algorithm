bool isBst(BinaryTreeNode<int> *root,int min,int max){
    //base case 
    if(root==NULL)
        return true;
    if(root->data >=min && root->data <=max){//chech one node
        
        bool left=isBst(root->left,min,root->data); //in left side (copy,rootdata)
        bool right=isBst(root->right,root->data,max); //in right (rootdata, copy)
        return left && right;
    }
    else
        return false;
     }

bool validateBST(BinaryTreeNode<int> *root) {
    return isBst(root,INT_MIN,INT_MAX);
}