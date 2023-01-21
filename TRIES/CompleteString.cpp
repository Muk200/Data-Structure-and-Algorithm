#include <bits/stdc++.h> 
struct Node {
    Node *links[26]; 
    bool flag = false; 
    
    bool containsKey(char ch) {
        return (links[ch - 'a'] != NULL); 
    }
    Node* get(char ch) {
        return links[ch-'a']; 
    }
    void put(char ch, Node* node) {
        links[ch-'a'] = node; 
    }
    void setEnd() {
        flag = true; 
    }
    bool isEnd() {
        return flag; 
    }
}; 
class Trie {
    private: Node *root; 
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new Node(); 
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *node = root;
        for(int i = 0;i<word.size();i++) {
            if(!node->containsKey(word[i])) {
                node->put(word[i], new Node()); 
            }
            node = node->get(word[i]); 
        }
        node->setEnd(); 
    }
    bool checkIfAllPrefixExists(string word) {
        //to re-iterate
        Node *node = root;
        bool flag = true; 
        for(int i = 0;i<word.size();i++) {
            if(node->containsKey(word[i])) {
                //get the word and check the flag should be true
                node = node->get(word[i]); 
                flag = flag & node->isEnd(); //if(node->isEnd() == false) then return true
            }
            else {
                return false; 
            } 
        }
        return flag; 
    }
};
string completeString(int n, vector<string> &a){
    Trie* obj = new Trie();
    for(auto word : a) obj->insert(word); 
    string longest = ""; 
    for(auto word: a) {
        if(obj->checkIfAllPrefixExists(word)) {
            if(word.size() > longest.size()) {
                longest = word; 
            }
            //two conditions between old & new strings
            else if(word.size() == longest.size() && word < longest) {
                longest = word; 
            }
        }
    }
    if(longest == "") return "None"; 
    return longest; 
}