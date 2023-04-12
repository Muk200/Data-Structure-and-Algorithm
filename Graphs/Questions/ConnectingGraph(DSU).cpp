//1101 test cases
class DisjointSet {
    
public:
    vector<int> rank, parent, size;
    //constructer
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n+1);

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]); //for path compresion store it
    }

    void unionByRank(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // if in same component
        if (ulp_u == ulp_v) return;

        // one greater than another
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }

        else { //if both parents have same rank 
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize(int u, int v) {

        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);

        // if in same component
        if (ulp_u == ulp_v) return;

        // one greater than another
        if (size[ulp_u] < size[ulp_v]) {

            parent[ulp_u] = ulp_v;
            //size of up_v will increase by no of elements in ulp_u
            size[ulp_v] += size[ulp_u]; 
        }
        else { //doesn't matter for size, since we still attach it

            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
  public:
    int Solve(int n, vector<vector<int>>& edge) {
        
        DisjointSet ds(n);
        int cntExtras =0;
        for(auto it : edge){
            
            int u = it[0];
            int v = it[1];
            
            // before connecting check if their ult parent is same then cnt++
            if(ds.findUPar(u) == ds.findUPar(v)){
                cntExtras++;
            }
            else{
                ds.unionBySize(u, v);
            }
        }
        
        // use the extra edges to connect the components
        int cntC = 0;
        for(int i=0; i<n; i++){
            if(ds.parent[i] == i) cntC++;
        }
        
        int ans = cntC - 1;
        if(cntExtras >= ans) return ans;
        return -1;
        
    }
};