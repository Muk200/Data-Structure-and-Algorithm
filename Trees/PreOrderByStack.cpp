class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>st;
        while (root || !st.empty()) {
            if (root) {
                ans.push_back(root -> val);
                if (root -> right) {
                    st.push(root -> right);
                }
                root = root -> left;
            } else {
                root = st.top();
                st.pop();
            }
        }
        return ans;
    }
};

/*
Create an empty stack and push the root node to it.
Do the following while the stack is not empty
Pop the top item from the stack and display it.
Push the right child of the popped item to the stack.
Push the left child of the popped item to the stack.
*/