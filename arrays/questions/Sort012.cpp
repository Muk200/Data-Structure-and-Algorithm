#include<iostream>
using namespace std;

void sort012(int *arr, int n)
{
   int s=0,e=n-1;
   int i = 0;
   while (i<=e){
       switch(arr[i]){
           case 0 :
               swap (arr[s++], arr[i++]);
               break;
           case 1 :
               i++;
               break;
           case 2 :
               swap(arr[e--],arr[i]);
               break;
       }
   }
//swapping 0 & 2 while keeping 1 in middle
}

// Most Optimised Solution (Dutch National Flag Algo)