class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        //{{r, c}, t}
        queue< pair< pair< int, int >, int >> q;
        int vis[n][m];
        int cntfresh =0;
        
        //to make fresh into rotten
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(grid[i][j] == 2){
                    
                    q.push({{i, j}, 0}); //at time 0 &marked rotten
                    vis[i][j] = 2;
                }
                else{
                    vis[i][j] = 0;
                }

                if(grid[i][j] == 1)
                    cntfresh++;
            }
        }
        
        int tm =0;
        //for 4 directions  (neighbouring)
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};
        
        while(!q.empty()){
            
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            int cnt=0;
            tm = max(tm, t);
            q.pop();
            
            for(int i=0; i<4; i++){
                
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                
                //for validity, not visited, & is fresh
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    
                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 1;
                    cnt++;
                }
            }
            
            
        }
        
        //if all oranges weren't converted
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                
                if(vis[i][j] != 2 && grid[i][j] ==1){
                    
                    return -1;
                }
            }
        }
                    //or 

        if(cnt != cntfresh)
            return -1;

        return tm;
    }
};