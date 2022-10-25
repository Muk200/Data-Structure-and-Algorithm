#include<iostream>
using namespace std;

bool checkPalindrome(string str, int i, int j){

    //base case
    if(i>j)
        return true;
    
    //first case check
    if(str[i] != str[j])
        return false;
    else{
        //recursive relation
        return checkPalindrome(str, i+1, j-1);
    }
}
int main(){

    string name ="abbccbba";
    cout<<endl;

    int n = name.length() -1;

    bool isPalindrome = checkPalindrome(name, 0,name.length() -1);

    if(isPalindrome)
        cout<<"It's a palindrome "<<endl;
    else{
        cout<<"It's not a palindrome "<<endl;
    }
}