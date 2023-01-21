//APPROACH 1

class Solution{
    private:
    int height(struct Node* node){
        //base case
        if(node == NULL) {
            return 0;
        }
        
        int left = height(node ->left);
        int right = height(node->right);
        
        int ans = max(left, right) + 1;
        return ans;
    }
    
    public:
    // to check if balanced or not 
        //1. left ans (root -> left);
        //2 right ans (root -> right);
        //3. abs (height(root -> left) - height(root -> right))  <= 1;
    bool isBalanced(Node *root)
    {
        //base case
        if(root == NULL){
            return true;
        }
        
        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        
        bool diff = abs (height(root -> left) - height(root -> right))  <= 1;
        
        if(left && right && diff){
            return true;
        }
        else{
            return false;
        }
    }
};



//APROACH 2
class Solution{

    public:
    pair<bool,int> isBalancedFast(Node* root){
        
        //base case
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        //isbalanced for left and right -> first block
        //height difference -> 2nd block
        
        
        pair<int,int> left = isBalancedFast(root -> left);
        pair<int,int> right = isBalancedFast(root -> right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        
        bool diff = abs(left.second - right.second) <= 1;
        
        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1; //height set
        
        if(leftAns && rightAns && diff){
            ans.first = true; //balance first block
        }
        else{
            ans.first = false;
        }
        
        return ans;
    }
    //Function to check whether a binary tree is balanced or not.
    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};