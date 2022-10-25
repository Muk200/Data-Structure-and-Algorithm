class Solution {
private:
    void solve(string digit, string output, int index,vector<string>& ans, string mapping[]){
        
        //base case
        if(index >= digit.length()){
            ans.push_back(output);
            return ;
        }
        //number at index
        int number = digit[index] -'0'; //bc the ans was given in string but we need it as  int type so we subtract  it by '0'
        
        string value = mapping[number];
        
        //recursive call for all the mapping in a particular no. 
        
        for(int i=0; i<value.length(); i++){
            
            output.push_back(value[i]); // eg output now has 'a' in it
            solve(digit, output, index+1, ans, mapping);
            output.pop_back(); //back-tracking after all of a path we need to clear the space
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.length() == 0)
            return ans;
        
        string output;
        int index =0;
        //mapping created
        string mapping[10] ={"", "", "abc" , "def","ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans; 
    }
};
