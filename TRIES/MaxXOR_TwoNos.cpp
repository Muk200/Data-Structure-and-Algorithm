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
int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{
    //make a new trie 
    Trie trie;
    
    //step 1. iterate, take a number from arr 1 & insert it
    for(auto &it : arr1){
        trie.insert(it);
    }
    int maxi =0;
    //step 2. now take every no from arr2 & check to give max
    for(auto &it : arr2){
        maxi = max(maxi, trie.getMax(it));
    }
    return maxi;
}

int main() {
  vector < int > arr1 = {6, 8};
  vector < int > arr2 = {7, 8, 2};
  int n = 2, m = 3;
  cout << maxXOR(n, m, arr1, arr2) << endl;
  return 0;
}