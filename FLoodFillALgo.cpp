class Solution {
private:
    void dfs(int row, int col,  vector<vector<int>> &ans, 
    vector<vector<int>>& image, int newColor, int delrow[], int delcol[], int inicolor){
        
        ans[row][col] = newColor;
        int n = image.size();
        int m = image[0].size();
        
        for(int i=0;i<4; i++){ //for 4 neighbours
            
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            //check for validity, if same color, and ahs not been colored yet
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&
            image[nrow][ncol] == inicolor && ans[nrow][ncol] != newColor){
                
                dfs(nrow, ncol, ans, image, newColor, delrow, delcol, inicolor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        // get initial color
        int inicolor = image[sr][sc]; 
        vector<vector<int>> ans = image;
        
        // delta row and delta column for neighbours
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1}; 
        
        dfs(sr, sc, ans, image, newColor, delrow, delcol, inicolor); 
        return ans; 
    }
};