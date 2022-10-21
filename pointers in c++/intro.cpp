#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout<<num<<endl;

    //address of operator - &
    cout<<"Address of num is "<<&num<<endl;

    // POINTER stores ths address
        // int *ptr = &i;
        // *ptr shows that a new block has been generated in memory having the address of &i
        // and always initialise it, even if it's from zero
        // (i= i+1) == (*ptr++)
        //data type of right value == datatype of pointer 
        // cout<< *ptr; is a dereference operator 

    int *ptr = &num;

    //*ptr -> value 
    //ptr -> address
    cout<<"Value is : "<<*ptr<<endl;
    cout<<"Value is : "<<ptr<<endl;
    
    double d = 4.3;
    double *p2 = &d;

    //size of pinter for any dataype is -> 8
    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    //pointer to int is created, and pointing to some garbage address
    //int *p = 0; 

    //cout << *p << endl;

    int i = 5;

    //same as int *p = &i;
    int *p = 0; 
    p = &i;  
    cout << p << endl;
    cout << *p << endl;
   
   //copying element and incrementing it won't increase the value in original
   int num1 = 5;
   int a = num1;
   cout << "a before " << num1 << endl;
   a++;
   cout << "a after " << num1 << endl;

   //but incrementing the vakue in pointer will increment the value in original
   int *pt  = &num;
   cout << "before " << num << endl;
   (*pt)++;
   cout << "after " << num << endl;

   //copying a pointer

   int *q = pt;
   cout << p <<" - " << q << endl; //addresss
   cout << *p <<" - " << *q << endl; //value

   //pointer arithmetic

   int j = 3;
   int *t = &j;
   //cout <<  (*t)++ << endl;
    *t = *t +1; //addition
    cout << *t << endl;

    cout << " before t " << t << endl;
    t = t + 1; //goes at next int by 4 bit(since size of int is 4 in bit)
    cout << " after t " << t << endl;



}