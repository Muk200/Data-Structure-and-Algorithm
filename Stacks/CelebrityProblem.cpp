//v.imp
class Solution 
{
    private:
    
    bool knows(vector<vector<int> >& M, int a, int b){
        
        if(M[a][b] == 1)// value pe one h toh janta h
            return true;
        else
            return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        //step1: push all elements in stack
        for(int i=0; i<n; i++){
            s.push(i)
        }
        //step2: get 2 elements and compare them
        
        while(s.size() > 1){
            
            int a =s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int Potentialcandidate = s.top();
        
        //single element in stack - potential celebrity, so verify it
            //to verify 1-> check row

        bool rowCheck = false; //no need of this 
        int zeroCount = 0;
        
        for(int i=0; i<n; i++){
            
            if(M[Potentialcandidate][i] == 0){
                zeroCount++;
            }
        }
        //all zeroes
        if(zeroCount == n){ // also  if(zeroCount != n) return -1;
            rowCheck = true;
        }
        
        //column check
        bool colCheck = false; //again 
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            
            if(M[i][Potentialcandidate] == 1){
                oneCount++;
            }
            
        }
        //all elements should be one except diagonals
            if(oneCount == n-1) // also if(oneCount != n-1) return -1;
                colCheck = true;
                
        //no need of these just return Potentialcandidate
        if(rowCheck == true && colCheck == true){
            return Potentialcandidate;
        }
        else{
            return -1;
        }
    }
};