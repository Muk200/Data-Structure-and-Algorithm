#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga  - NO

    //*p2 = *p2 + 1;
    //kuch change hoga - YES

    **p2 = **p2 + 1;
    //kuch change hoga - YES
}

int main(){

 cout<<endl;
 
    int i =5;
    int* p = &i;
    //double pointer
    int** p2 = &p;

    cout<<"printing p "<< p <<endl; //content(value) in p
    cout<<"printing address of p "<< &p <<endl; //address of p

    cout<< *p2 <<endl;
    cout << endl << endl;
    // {p} and {*p2} gives the value in p
    // {p} gives the content itself and {*p} gives the content through the use of address
    //if u want the value of i then either print the value of i itself or say "print the value at the address via pointer "

       //to print the value of "i"
         // 1. print the i itself
         // 2. print via pointer "p"
         // 3. print via pointer "p2" to "p" and then reach i

       cout<< "IST "<< i <<endl;
       cout<< "2ND "<< *p <<endl;
       cout<< "3RD "<< **p2 <<endl;

       cout << endl << endl; 

       //to print the value of p
         // 1. print where the address of i is stored
         // 2. print "p" itself
         // 3. print via pointer "p2"

        cout<<  "I "<< &i <<endl;
        cout<< "II " << p <<endl;
        cout<< "III "<<*p2 <<endl;

        cout << endl << endl;
       //to print value of p2
         // 1 . print where the address of "p" is
         // 2. print "p2" itself

       cout<<"ist "<< &p <<endl;
       cout<<"2nd "<< p2 <<endl;

    cout << endl << endl;
    cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << p2 << endl;
    update(p2);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << p2 << endl;
    cout << endl << endl;
}