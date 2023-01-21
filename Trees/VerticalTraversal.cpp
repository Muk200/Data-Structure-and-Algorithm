class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        
        map<int, map<int,vector<int> > > nodes; //map for horizontal dist(HD),lvl wise mapping & nodes

        queue< pair<Node*, pair<int,int> > > q; //queue for pair of HD & lvl
        vector<int> ans;
        
        
        if(root == NULL)
            return ans;
            
        q.push(make_pair(root, make_pair(0,0))); //since initially both HD & lvl are 0
        
        while(!q.empty()){
            pair<Node*, pair<int,int> > temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int hd = temp.second.first;
            int lvl = temp.second.second;
            
            nodes[hd][lvl].push_back(frontNode->data); //entry for every node we are at in map
            
            if(frontNode->left) //since in left direction horizontal lvl decreases and actual lvl increases
                q.push(make_pair(frontNode->left, make_pair(hd-1,lvl+1)));
                
            if(frontNode->right)
                q.push(make_pair(frontNode->right, make_pair(hd+1,lvl+1)));
        }
        //ans jo mainly nikalna h voh h vector<int> from within a map which itself is in pair with int
        for(auto i:nodes){
            
            for(auto j:i.second){
                
                for(auto k:j.second){
                    
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};