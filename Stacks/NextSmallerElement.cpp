// a doubt - ans(n) kyu why not ans only
#include<stack>
#include<vector>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1); // initially stack shouldn't be empty 
    vector<int> ans(n);
    
    // direction from right to left
    for(int i=n-1; i>=0; i--)
    { 
        int curr = arr[i];
        while(s.top() >= curr) //move till any smaller element is found
        { 
            s.pop();
        }
        // ans is stack's top
        ans[i] = s.top();
        s.push(curr); // jis elemet ka ans milta jaye usko stack mein dalte jao
    }
    return ans; 
} 