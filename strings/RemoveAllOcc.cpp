#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length() !=0 && s.find(part) < s.length()){
            
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
// part() is deletes the first occurence{means left part of str}
// erase() deletes that portion of string from the given position till the length