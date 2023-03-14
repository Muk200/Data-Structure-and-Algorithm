// for single visted array mark , vis as1, pathvis as 2

class Solution {
  private:
    bool dfsCheck(int node, vector<int> adj[], int vis[], int pathvis[]){
        
        vis[node] =1;
        pathvis[node] = 1;
        
        //traverse for adj nodes
        for(auto it : adj[node]){
            
            if(!vis[it]){ // not visited
            
                if(dfsCheck(it, adj, vis, pathvis) == true) return true;
            }
            else if(pathvis[it]){ //already visited & on same path
                return true;
            }
        }
        
        pathvis[node] =0; //while returning back mark it as not path visited 
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        int pathvis[V] = {0};
        
        //for components
        for(int i=0; i<V; i++){
           
           if(!vis[i]){
               if(dfsCheck(i, adj, vis, pathvis)== true) return true;
           } 
        }
        return false;
    }
    
};