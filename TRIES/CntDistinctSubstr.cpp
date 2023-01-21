//BASIC IDEA
    //IF ALREADY EXISTS -> COUNT
    //IF NOT -> INSERT -> THEN COUNT

#include <bits/stdc++.h> 
struct Node {
    Node *links[26]; 
    
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'a']; 
    }
    void put(char ch, Node* node) {
        links[ch-'a'] = node; 
    }
}; 

int countDistinctSubstrings(string &s)
{
    int cnt =0;
    Node* root = new Node();
    int n = s.size();
    //loop for entire string
    for(int i=0; i<n; i++){
        Node* node = root;
        //loop for string from a particular alphabet
        for(int j =i; j<n; j++){
            if(!node->containsKey(s[j])){
                node->put(s[j], new Node);
                cnt++;
            }
            node = node->get(s[j]);
        }
    }
    //cnt + 1 bc we need to add an empty str too
    return cnt+1;
}