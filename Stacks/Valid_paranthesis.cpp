//A VERY IMPORTANT QUESTION

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for(int i=0; i<expression.length(); i++){
        
        char ch = expression[i];
        
        //if opening bracket, stack push
        //if closing bracket, stacktop check and pop
        //balanced is when every opening bracket there must be a closing one
        
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            //for closing bracket
            if(!s.empty()){
                char top = s.top();

                 //issmein phele char ka opposite bracket rakhna h aka ch ko CLOSING BRACKET RAKHNA H & top coresponding

                if(ch == ')' && top == '(' ||
                  ch == '}' && top =='{' ||
                  ch == ']' && top == '['){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false; //stack is empty and we get a closing bracket
            }
        }
    }
    if(s.empty())
        return true;
    else
        return false;
}