#include<iostream>
using namespace std;

// NOW WE HAVE CREATED A FUNCTION CALLED POWER 
// POWER(A,B) BY USE OF FUNCTIONS

int power() {

    int c,d;
    cin>>c>>d;
    int ans =1;
      
    for(int i=1; i<=d; i++) {
        ans = ans*c;
    }

    return ans;
}


int main() {
    
    // pow(a,b) in normal way
    /*
    int a,b;
    cin>>a>>b;

    int ans =1;
    for(int i=1; i<=b; i++){

       ans= ans*a; 
    }

    cout<<"Answer is "<<ans<<endl;
    


        // using fncs
    
   int c,d;
   cin>>c>>d;

   int answer = power(c,d);
   cout<<"Answer is "<< answer<<endl;
  
        // IN SHORT WAY TAKE INPUT AND DECLARE VARIABLE WITHIN FNC 

    int answer = power();
    cout<<"Answer is "<< answer<<endl;
    
   return 0;
    */
    


}