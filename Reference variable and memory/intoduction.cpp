#include<iostream>
using namespace std;

//DO NOT FOLLOW THIS -> bc num and ans are local varibale then what's the point of making them 

int& func(int a) {
    int num = a;
    int& ans = num;
    return ans;
}

int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

//pass by reference 
void update2(int& n){ 
    //ref variable
    n++;
}

void update1(int n){ 
    //works on concept of pass by value which creates a copy into other fnc
    n++;
}

int main(){
    /*
    int i = 5;
    //create a ref variable
    int &j = i;

    cout << i << endl; 
    i++;
    cout << i << endl; 
    j++;
    cout << i << endl; 
    cout << j << endl;
    */

   int n = 5;
   
   cout << "Before " << n << endl;
   update1(n);
   cout << "After " << n << endl;

   cout << "Before " << n << endl;
   update2(n);
   cout << "After " << n << endl;

    func(n);
 
    cout<<fun(n)<<endl;
}
// FOR WHEN WE USE STACK MEMNORY {static allocation}

// in array don't give any variable at run time bc it will mean
// eg -> 
// int n;
// cin >> n;   
//  arr[n]; 
// memory want at run time > memory allocated at complie time ,
//hence programs crashes  