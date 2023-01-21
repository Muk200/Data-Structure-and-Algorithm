//APPROACH 1

class Solution {
  private:
    int height(struct Node* node){
        //base case
        if(node == NULL){
            return 0;
        }
        //height will be max of left and right subtree + root node seeing which is longest path
        int left = height(node -> left);
        int right = height(node -> right);
        
        int ans = max(left, right) + 1;
        return ans;
    }


  public:
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        //base case
        if(root == NULL){
            return 0;
        }
        
        int opt1 = diameter(root -> left); //only left
        int opt2 = diameter(root -> right); //only right
        int opt3 = height(root -> left) + height(root -> right) + 1; //left + right + root node
        
        int ans = max(opt1 , max(opt2, opt3));
        
        return ans;
    }
};


//APPROACH #2


class Solution {
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
    // Function to return the diameter of a Binary Tree.
    
    pair<int,int> diameterFast(Node* root) {
        //base case
        if(root == NULL) {
            pair<int,int> p = make_pair(0,0);
            return p;
        }
         //first block -> diameter, 2nd block -> height
         
         
        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);
        
        
        int op1 = left.first; //diameter of left from first block
        int op2 = right.first; //diameter of right from first block
        int op3 = left.second + right.second + 1; //same formula leftKIheight + rightKIheight + 1
        
        pair<int,int> ans;
        ans.first = max(op1, max(op2, op3));; //diameter formula 
        ans.second = max(left.second , right.second) + 1; //height 

        return ans;
    }
    int diameter(Node* root) {
    
        return diameterFast(root).first;
        
    }
};