class Solution
{
public:
    void solve(Node* root, int sum, int &maxsum, int len, int &maxlen){
        
        //base case
        if(root == NULL){ // maybe here we have intentionally ended the path
            
            if(len > maxlen){
                maxsum = sum;
                maxlen = len;
            }
            //we don't need len < maxlen since we are searching for the longest path
            else if(len == maxlen){
                
                maxsum = max(sum, maxsum);
            }
            return;
        }
        
        sum = sum + root->data; // starting bc root se honi h
        
        solve(root->left, sum, maxsum, len+1, maxlen);
        solve(root->right, sum, maxsum, len+1, maxlen);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        int len =0;
        int maxlen =0; //store ans(length)
        
        int sum=0;
        int maxsum = INT_MIN; //store ans(sum)
        
        solve(root, sum, maxsum, len, maxlen);
        return maxsum;
    }
};