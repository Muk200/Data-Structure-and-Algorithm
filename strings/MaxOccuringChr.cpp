#include<string>
#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
   
   //assuming 'a'to 'z' & 'A' to 'Z' same also as numbers intotal alphabet are 26
    int arr[26] ={0};

    //create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch =s[i];
        int number = 0;
        
        //lowercase
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        //uppercase
        else{
            number = ch -'A';
        }
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1, ans =0;

    for(int i=0; i<26; i++){

        if(maxi < arr[i]){
            ans =i;
            maxi = arr[i];
        }
    }

    char finalans = 'a' + ans;
    return finalans;
}

int main(){

    string s;
    cin>>s;

    cout<<getMaxOccCharacter(s)<<endl;
}

// 1. intially all the value stored at index are 0
// 2. for every ch increase the count in the value for resp index
// 3. now, take the index of maximum value of count and store the ans 
// 4. add + 'a' to your ans