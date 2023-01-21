
#include <bits/stdc++.h> 

struct Node{
  Node* links[2]; //for 0 & 1
    
  bool containsKey(int bit){
      return(links[bit] != NULL); //set or not
  }
   Node* get(int bit){
       return links[bit];
   }
    void put(int bit, Node* node){
        links[bit] = node;
    }
};

class Trie{
    public:
    Node* root;
    //constructor
    Trie(){
        root = new Node();
    }
    public:
    void insert(int num){
        Node* node = root;
        //from left to right
        for(int i=31; i>=0; i--){
            int bit = (num >> i) & 1; //is the bit on this index set or not
            if(!node->containsKey(bit)){
                node->put(bit, new Node());
            }
            node = node->get(bit);
        }
    }
    public:
    int getMax(int num){
        //start from root 
        Node* node = root;
        int maxnum = 0;
        //then start from back
        for(int i=31; i>=0; i--){
            int bit = (num >> i) & 1;
            //and after the we got bit we need opposite of it
            if(node->containsKey(1 - bit)){
                maxnum = maxnum | (1<<i); //to add to maxNum and make it to 1 
                node = node->get(1-bit);
            }
            else{
               node = node->get(bit); 
            }
        }
        return maxnum;
    }
    
};

vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
    
    
    vector<int> ans(queries.size(), 0); 
    vector<pair<int, pair<int,int>>> offlineQueries; 
    
    //sort the arr
    sort(arr.begin(), arr.end()); 
    int index = 0;
    
    //traverse in queries
    for(auto &it: queries) {
                            //    ai     xi      index
        offlineQueries.push_back({it[1],{it[0], index++}}); 
    }
    
    sort(offlineQueries.begin(), offlineQueries.end()); 
    int i = 0; 
    int n = arr.size(); 
    Trie trie; 
    
    int ai = offlineQueries[i].first;
    int xi = offlineQueries[i].second.first;
    int QIndex = offlineQueries[i].second.second;
    
    //traverse in OfflineQueries now 
    for(auto &it : offlineQueries) {
        while(i < n && arr[i] <= it.first) { //within rangeofarr & conditions
            trie.insert(arr[i]); 
            i++; 
        }
        if(i!=0) ans[it.second.second] = trie.getMax(it.second.first); 
        else ans[it.second.second] = -1; 
    }
    return ans; 
}