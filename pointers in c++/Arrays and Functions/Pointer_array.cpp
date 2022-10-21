#include<iostream>
using namespace std;
int main(){
    cout<<endl;
   /*
    int arr[10]= {23, 122, 41, 67};
    //the name of the array points athe address of first element
    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl; //value at 0TH index
    cout<<"Address of first memory block is "<< &arr[0] <<endl;

    cout<< "4TH "<< *arr <<endl; //value at 0th index
    cout<< "5TH "<< *arr + 1 <<endl; //value at 0th index + 1

    cout<< "6TH "<< *(arr + 1) <<endl; // value at 1st index
    cout<< "7TH "<< (*arr) + 1 <<endl; //value at 0th index + 1
    cout<< "8TH "<< arr[2] <<endl; // *(arr + 2) -> take 2 blocks jump and print value of it

    cout<< "9TH "<< *(arr + 2) <<endl;

    int i =3;
   cout<< i[arr] <<endl; // same as arr[i] = *(arr + i)
   // i[arr] = *(i + arr)
    

   int temp[10]= {1, 2};
   cout<<sizeof(temp)<<endl; //4 X size (address of ist loc)
   cout<<"ist " <<sizeof(*temp)<<endl; // (size of) value at ist loc
   cout<<"2nd " <<sizeof(&temp)<<endl; // (size of) address of ist memory block 

   int *ptr = &temp[0];
   cout<<sizeof(ptr)<<endl; // 8 bytes bc it's size of a pointer (address)
   cout<<sizeof(*ptr)<<endl; // size of value present 
   cout<<sizeof(&ptr)<<endl; //memory  needed to store 
   

   int a[20] = {1,2,3,5};
   cout << " -> " << &a[0] << endl;
  cout << &a << endl; //address of a at 0th index
   cout << a << endl;


   int *p = &a[0];
   cout << p << endl; //address at 0th index
   cout << *p << endl; //value at 0th index
   
   cout << "-> " << &p << endl; //address of p block
 */
   int arrr[10];
   //ERROR 
     //arrr = arrr +1;

   int *pt = &arrr[0];
   cout<<pt<<endl;
   
   //CANNOT REASSIGN AN ADDRESS 

   pt = pt + 1;
   cout<<pt<<endl; //now it points to a new block 
   //bc it increments the value inside it, not trying to change the address of it


}