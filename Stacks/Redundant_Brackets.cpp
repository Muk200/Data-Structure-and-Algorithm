#include<stack>

bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for(int i=0; i<s.length(); i++) 
    {

        char ch =s[i];
        //push into stack if any opening bracket or operator
        if(ch == '(' || ch == '+' ||ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else
        {
            //ch is closing bracket or lowercase letter
            // check if there is any operator between those brackets
                  // YES - not redundant , NO - redundant
            
            if(ch == ')') {
                bool isRedundant = true;
                
                while(st.top() != '(') {
                    char top = st.top();
                    if(top == '+' ||top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    st.pop(); 
                }
                
                if(isRedundant == true)
                    return true;
                st.pop(); // pop the opening bracket as well
            }
            
        } 
    }
    return false;
}