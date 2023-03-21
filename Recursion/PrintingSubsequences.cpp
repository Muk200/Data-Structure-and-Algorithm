#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printSubSeq(int ind, vector<int> &ds, int arr[], int n){

    // base case
    if(ind == 3){
        for(auto it : ds){
            cout<< it << " ";
        }
        if(ds.size() == 0){ //for null
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    // take(pick), add the particular index
    ds.push_back(arr[ind]);
    printSubSeq(ind+1, ds, arr, n);
    ds.pop_back();

    // not take(pick), NOT  add the particular index
    printSubSeq(ind+1, ds, arr, n); 
}

void printSubSeq1(int ind, vector<int> &ds, int arr[], int n){

    // base case
    if(ind == 3){
        for(auto it : ds){
            cout<< it << " ";
        }
        if(ds.size() == 0){ //for null
            cout<<"{}";
        }
        cout<<endl;
        return;
    }


    // not take(pick), NOT  add the particular index
    printSubSeq1(ind+1, ds, arr, n);


    // take(pick), add the particular index
    ds.push_back(arr[ind]);
    printSubSeq1(ind+1, ds, arr, n);
    ds.pop_back();
 
}

int main(){

    int arr[] = {3,1,2};
    int n =3;
    vector<int> ds;

    cout<<endl;
    cout<<"increasing order"<<endl;
    printSubSeq(0, ds, arr, n);
    cout<<endl;

    cout<<"DECREASING(REVERSE) order"<<endl;
    printSubSeq1(0, ds, arr, n);

    return 0;
}  