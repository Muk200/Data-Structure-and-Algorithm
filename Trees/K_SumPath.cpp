class Solution{
  public:
    void solve(Node* root, int k, int &cnt, vector<int> path){
        //base case
        if(root == NULL){
            return;
        }
        
        //add current node to path
        path.push_back(root->data);
        
        //left call
        solve(root->left, k, cnt, path);
        //right call
        solve(root->right, k, cnt, path);
        
        //check for k sum
        
        int size = path.size();
        int sum =0;
        for(int i=size-1; i>=0; i--){
            sum = sum + path[i];
            if(sum == k){
                cnt++;
            }
        }
        
        //wapis jate time vector se remove bhi krna h
        path.pop_back();
    }
    int sumK(Node *root,int k)
    {
        vector<int> path;
        int cnt =0;
        solve(root,k, cnt, path);
        return cnt;
        
        
    }
}; 