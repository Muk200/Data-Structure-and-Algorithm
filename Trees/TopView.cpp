class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
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
            
            //if one value is already present for HD, then do nothing(maintain 1:1 mapping)
            if(topNode.find(hd) == topNode.end())
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