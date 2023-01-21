//issko divide in three parts
    //1. left part(without leaf)
    //2. all leaf (left to right)
    //3. right part(without leaf && right to left)
    
class Solution {
public:
    void tranverseLeft(Node* root, vector<int> &ans){
        
        //base case
        if((root == NULL) || (root->left ==NULL && root->right == NULL)) //leaf node
            return ;
        
        ans.push_back(root->data);
        
        if(root->left)
            tranverseLeft(root->left, ans);
            
        else
            tranverseLeft(root->right, ans);
            
    }
    
    void traverseLeaf(Node* root, vector<int> &ans){
        
        //basecase
        if(root == NULL)
            return ;
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        //left and right mein move krte rho
        
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    
    void traverseRight(Node* root, vector<int> &ans){
        
        //base case
        if((root == NULL) || (root->left ==NULL && root->right == NULL)) //leaf node
            return ;
        
        if(root->right)
            traverseRight(root->right, ans);
        
        else
            traverseRight(root->left, ans);
        
        //wapas ate time store/print krlo
        ans.push_back(root->data); 
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        ans.push_back(root -> data);
        
        //left part print/store
        tranverseLeft(root->left, ans);
        
        //traverse leaf node
            //left subtree
            
        traverseLeaf(root->left, ans);
            //right subtree
        traverseLeaf(root->right, ans);
            
        //right part
        traverseRight(root->right, ans);
        
        return ans;
    }
};