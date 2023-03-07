class Solution {
  private:
    void dfs(int node, vector<int> adjLS[], int vis[]){
        
        vis[node] = 1;
        for(auto it : adjLS[node]){
            
            if(!vis[it]){
                
                dfs(it, adjLS, vis);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        
        //a matix given not a list so convert it into a list
        vector<int>adjLS[V];
        
        for(int i=0; i<V; i++){
            for(int j=0; j<V; j++){
                
                if(adj[i][j] == 1 && i != j){ //if true and is not a self node
                
                    adjLS[i].push_back(j);
                    adjLS[j].push_back(i);
                }
            }
        }
        
        int vis[V] = {0};
        int cnt =0; //to store no of provinces
        
        for(int i=0; i<V; i++){
            
            if(!vis[i]){
                
                cnt++;
                dfs(i, adjLS, vis);
            }
        }
        return cnt;
    }
};  