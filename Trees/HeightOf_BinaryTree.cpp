class Solution{
    public:
    //Function to find the height of a binary tree.
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
};