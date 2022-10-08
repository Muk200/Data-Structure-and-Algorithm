#include<iostream>
using namespace std;
int main(){
   
  //declare
  int num[15];

  //accessing an array
  cout<< num[5] <<endl;

  //initialising the array
  int second[3] = {5, 7, 11}; 
   
  //accessing a array
  cout << "value at 2 index is " <<second[2] <<endl;

  int third[15] = {2,7};
  int n = 15;

  cout<<"Printing the array "<<endl;
   //print the array 
  for(int i = 0; i<n; i++) {

    cout<<third[i]<<endl;
 
  
    

  //initialising all locations with zero

  int four[10] = {0};

  n = 10;
  for(int i = 0; i<n; i++) {

    cout<<four[i]<<endl;;
  }

  //initialising all locations with 1 [not possible]

  int fifth[10] = {1};

  n = 10;
  for(int i = 0; i<n; i++) {

    cout<<fifth[i]<<endl;
  }

  cout<<"Everything is fine"<<endl;

  return 0;
  
}   