#include<string>
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i =0;
        int ansIndex =0;
        int n = chars.size();
        
        //to check if one chr == next chr
        while(i<n)
        {
            int j = i+1;
            
            while(j<n && chars[i] == chars[j])
            {
                j++;
            }
            //you will come here when
            // 1. traversed entire arr
            // 2. encountered new/different h 
            
            //oldChar stored
            chars[ansIndex++] = chars[i];
            
            int count  = j - i;
            
            if(count > 1){
                //converting counting into single digit & saving in answer
                string cnt = to_string(count); //converte count in str
                for(char ch:cnt)
                {
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
       return ansIndex; 
    }
};