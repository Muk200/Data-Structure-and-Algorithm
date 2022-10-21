#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";

    cout << arr << endl;
    //attention here
    cout << ch << endl;

    char *c = &ch[0];
    //prints entire string
    cout<< c <<endl;
    //cout's implementation is different in chr and int array

    char temp = 'z';
    char *p = &temp;

    cout << p << endl;
    //here it will satrt printing from the address given to pointer till the null chr is obtained
}