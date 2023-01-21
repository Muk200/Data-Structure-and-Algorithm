class Solution {
  public:
    vector <int> bottomView(Node *root) {
        
        vector<int> ans;
        //base case
        if(root == NULL)
            return ans;
        
        map<int,int> topNode; //HD & data from node
        queue<pair<Node*, int> > q; // node & HD
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            
            pair<Node*, int> temp = q.front(); //front mein dono values uthao
            q.pop();
            
            Node* frontNode = temp.first; //for node
            int hd = temp.second; //for HD
            
            //remove the condition from top view logic/code
            topNode[hd] = frontNode -> data;
                
            //for left & right
            if(frontNode ->left)
                q.push(make_pair(frontNode->left, hd-1));
                
            if(frontNode ->right)
                q.push(make_pair(frontNode->right, hd+1));
        }
        
        for(auto i:topNode){
            ans.push_back(i.second);
        }
        return ans;
    }
};