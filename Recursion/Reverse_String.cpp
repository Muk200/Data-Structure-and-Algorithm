#include<iostream>
using namespace std;

void reverse(string& str, int i){
   
    cout<<"call recieved for "<<str<<endl;
    int n = str.length() - 1;
    //base case
    if(i>n-i-1)
        return ;
    
    //processing
    swap(str[i], str[n-i]);
    i++;
    n-i-1; 
    
    //recursive relation 
    reverse(str, i);
}

int main(){
    string name ="muskaan";
    int n = name.length()-1;
    cout<<endl;
    reverse(name, 0);
    cout<<endl;

    cout<< name <<endl;
}
//we have to take pass by reference or return -> it is updating a copy not real one