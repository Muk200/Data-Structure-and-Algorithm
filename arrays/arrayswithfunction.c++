#include<iostream>
using namespace std;
// ARRAYS WITH FUNCTIONS


  
void printArray(int arr[], int size){
  
  cout<<"Printing the array "<<endl;
   //print the array 
  for(int i = 0; i<size; i++) {

    cout<<arr[i]<<" ";
   
 }
  cout<<"Printing DONE!! "<<endl;


}


int main() {

   
  int third[15] = {2,7};
  int n = 15;
  //printArray(third, 15);

  int thirdsize = sizeof(third)/sizeof(int);
 //cout<<"Size of fifth is "<<thirdsize<<endl;

  int four[10] = {0};
  n = 10;
  //printArray(four, 10);

  int fifth[10] = {1};
  n = 10;
 // printArray(fifth, 10);

  int num[15];
 // printArray(num,15);

 /*
  char ch[5] ={'a', 'b', 'c', 'd', 'e'};
  cout<< ch[3];
  cout<<"Printing the array "<<endl;
   //print the array 
  for(int i = 0; i<5; i++) {

    cout<<ch[i]<<" ";
   
 }
 */
  double firstdouble[5];
  float firstfloat[6];
  bool firstbool[9];
  
  //how to calculate the sixe of an array
 int fifthsize = sizeof(fifth)/sizeof(int);
 //cout<<"Size of fifth is "<<fifthsize<<endl;



    return 0;
}

  
  

