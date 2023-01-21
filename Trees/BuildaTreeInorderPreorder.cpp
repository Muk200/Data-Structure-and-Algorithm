class Solution{
    public:
    Node* solve(int in[], int il, int ir, int pre[], int &pi) {
        if(ir < il)
            return NULL;
        int root = pre[pi++], i;
        Node* curr = new Node(root);
        if (il == ir) return curr;
        for(i = il; i <= ir; i++)
            if (in[i] == root) break;
        
        curr->left = solve(in, il, i-1, pre, pi);
        curr->right = solve(in, i+1, ir, pre, pi);
        return curr;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int pi = 0;
        return solve(in,0,n-1,pre,pi);
    }
};